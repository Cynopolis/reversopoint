#!/usr/bin/env python3
"""Partial MSVC C++ name demangler -> readable `ns::Class::method`.

Recovers the namespace/class/method (the high-value part). Templates are left as
their raw `$`-tokens. Calling convention shown as a suffix.
"""

def _scope(parts):
    """Given tokens after the leading '?'-name, return (first, scope_list) split at the first ''."""
    try:
        sep = parts.index('')
    except ValueError:
        return None, None
    return parts[0], parts[1:sep]

def demangle_ms(name):
    if not name.startswith('?'):
        return name
    if name.startswith('??0'):
        cls, scope = _scope(name[3:].split('@'))
        if cls is None: return name
        return '::'.join(list(reversed(scope)) + [cls]) + '::<ctor>'
    if name.startswith('??1'):
        cls, scope = _scope(name[3:].split('@'))
        if cls is None: return name
        return '::'.join(list(reversed(scope)) + [cls]) + '::<dtor>'
    if name.startswith('??2'):
        cls, scope = _scope(name[3:].split('@'))
        if cls is None: return name
        return '::'.join(list(reversed(scope)) + [cls]) + '::<conversion>'
    if name.startswith('??3'):
        return name  # operators: leave raw
    parts = name[1:].split('@')
    fname, scope = _scope(parts)
    if fname is None:
        return name
    qual = '::'.join(list(reversed(scope)) + [fname])
    # calling convention = first char of the signature (parts after the '&&')
    try:
        sep = parts.index('')
        sig = parts[sep+2] if len(parts) > sep+2 else ''
    except ValueError:
        sig = ''
    cc = {'A':' (thiscall)','C':' (cdecl)','E':' (fastcall)','M':' (stdcall)',
          'U':' (vectorcall)','Y':' (cdecl)'}.get(sig[0],'') if sig else ''
    return qual + cc

if __name__ == '__main__':
    import sys
    for ln in sys.stdin.read().splitlines():
        ln = ln.strip()
        if ln:
            print(demangle_ms(ln))
