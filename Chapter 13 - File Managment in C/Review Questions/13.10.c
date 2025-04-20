
✅ 13.10 Difference between rewind(fp); and fseek(fp, 0L, SEEK_SET);
Both move the file pointer to the beginning.

rewind() also clears error and EOF flags, while fseek() does not.
