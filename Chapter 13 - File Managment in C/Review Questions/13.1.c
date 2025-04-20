✅ 13.1 True or False with Explanations
(a) A file must be opened before it can be used.
✅ True

In C, a file must be opened using fopen() before any reading or writing can occur.

(b) All files must be explicitly closed.
✅ True

It's good practice to explicitly close a file using fclose(). While some systems auto-close at program termination, relying on it is risky.

(c) Files are always referred to by name in C programs.
❌ False

Once opened, files are referred to using FILE pointers, not by name. The name is only used in fopen().

(d) Using fseek to position a file beyond the end of the file is an error.
❌ False

In binary files, seeking beyond the end is allowed. In text files, behavior may vary — but it’s not necessarily an error.

(e) Function fseek may be used to seek from the beginning of the file only.
❌ False

fseek() can seek from:

Start (SEEK_SET)

Current position (SEEK_CUR)

End (SEEK_END)

(f) If an existing file is opened in write-mode, then the current contents of the file are deleted.
✅ True

Opening a file with mode "w" will truncate (delete) existing contents.

(g) If a non-existent file is opened in read-mode, then it results in an error.
✅ True

Trying to open a file in "r" mode that doesn’t exist will return NULL.

(h) If a file is not closed through an explicit fclose() statement, then the file remains open even after the termination of the program.
❌ False

Most operating systems automatically close files when the program exits. But relying on this is bad practice.

(i) Both scanf() and fscanf() functions return the number of items that are successfully read.
✅ True

Both functions return the count of items successfully matched and assigned. If reading fails, they may return less or even EOF.
