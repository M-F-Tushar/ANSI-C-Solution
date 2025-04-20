
✅ 13.3 Describe the use and limitations of the functions getc and putc.
getc(FILE *fp) – Reads a single character from the given file.

putc(int ch, FILE *fp) – Writes a single character to the file.

🔹 Uses:

Good for character-by-character file reading or writing.

🔹 Limitations:

Inefficient for large files compared to fread/fwrite.

Only handles characters, not structured or binary data.

