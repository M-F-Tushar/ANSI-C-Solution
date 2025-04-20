
✅ 13.17 Can we read from and write to the same file without resetting the pointer?
❌ No

You must use fseek() or rewind() to move the file pointer between reading and writing.

Also, use "r+", "w+", or "a+" mode for both reading and writing.
