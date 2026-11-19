Youre goal is to reverse engineer RevoMetro executable and create a working windows driver for it that allows me to configure the scanner and get scan data without having to use the revo metro software. In the end, I want a python library that can do this.

Once there is a working windows driver, we're going to port that driver over to linux so that I can use it on my normal PC.

## Rules

- Take notes in NOTES.md as you make progress reverse engineering.
- Tell me if there are tools you're missing and ask me to install them
- Tell me if you're running into issues, and ask for help if you fail after 2-3 attempts.
- Any decompiled artifacts you make should be saved in this project's artifacts/ folder and named appropriately in a subfolder.
- Any additional tools you download and use should go in this project's download folder with a note in AGENTS.md about how and when to use that tool. Don't install tools elsewhere because they will be harder to find later.
- Always check the REA MCP plugin to see if it has a suitable tool before you try to download or write your own tool.
