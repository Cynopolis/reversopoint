"""Reverse Inno Setup's JMP/CALL instruction optimization (floCallInstructionOptimized).

DECODE direction of TransformCallInstructions (Inno Setup Compression.Base.pas),
applied per 64KB buffer with a running AddrOffset, exactly as
TFileExtractor.DecompressFile does.

Model:
- Buf in DecompressFile is array[0..65535] => 65536-byte buffers.
- For each file, AddrOffset starts at 0 and advances by the buffer size.
- Within a buffer of n bytes, only positions [0, n-4) can start a CALL/JMP
  (the leading "Dec(Size,4)"). A CALL at file offset p stores its 4-byte
  rel32 at p+1..p+4; high byte is at p+4. addr = (p+5) & 0xFFFFFF.
"""

BUFSIZE = 65536
_E8 = b"\xe8"
_E9 = b"\xe9"


def _find_e8e9(out, start, end):
    """First 0xE8 or 0xE9 in out[start:end], else -1. (C-speed via bytearray.find)"""
    i = start
    while True:
        a = out.find(_E8, i, end)
        b = out.find(_E9, i, end)
        if a == -1:
            return b
        if b == -1:
            return a
        return a if a < b else b


def de_transform(data: bytes) -> bytes:
    out = bytearray(data)
    L = len(out)
    buf_off = 0
    while buf_off < L:
        n = min(BUFSIZE, L - buf_off)
        buf_off += n
        if n < 5:
            continue
        scan_end = buf_off - 4  # positions [buf_off-n, scan_end) may start a CALL
        p = _find_e8e9(out, buf_off - n, scan_end)
        while p != -1:
            if out[p + 4] == 0x00 or out[p + 4] == 0xFF:
                addr = (p + 5) & 0xFFFFFF
                rel = out[p + 1] | (out[p + 2] << 8) | (out[p + 3] << 16)
                rel = (rel - addr) & 0xFFFFFFFF
                if rel & 0x800000:
                    out[p + 4] = (~out[p + 4]) & 0xFF
                out[p + 1] = rel & 0xFF
                out[p + 2] = (rel >> 8) & 0xFF
                out[p + 3] = (rel >> 16) & 0xFF
            p = _find_e8e9(out, p + 5, scan_end)
    return bytes(out)
