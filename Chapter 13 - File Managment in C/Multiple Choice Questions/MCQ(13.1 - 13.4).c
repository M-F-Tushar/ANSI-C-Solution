13.1. Which of the following functions are used to write an integer to a file?
Options:

(a) fprintf()

(b) putw()

(c) putc()

(d) puts()

Answer: ✅ (b) putw()

Explanation:

fprintf() – Used to write formatted output to a file (like printf, but for files). You can use it to write integers, but it writes formatted text, not binary.

✅ putw() – Specifically designed to write an integer to a file in binary format.

putc() – Writes a single character to a file, not an integer.

puts() – Writes a string to a file (adds a newline automatically).

13.2. Which of the following symbols are used to indicate EOF?
Options:

(a) ^z

(b) ~z

(c) EOF

(d) None of these

Answer: ✅ (c) EOF

Explanation:

✅ EOF is a symbolic constant in C (typically defined as -1) used by functions like getc() or fgetc() to indicate the end of a file.

^z – On Windows systems, pressing Ctrl+Z may be used to simulate EOF when typing input manually. But it's not used in code.

~z – This has no meaning in this context.

None of these – Not correct because EOF is the right answer.

13.3. While reading and writing integer data to a file, an EOF is indicated by which of the following integer values?
Options:

(a) –1

(b) 0

(c) –9999

(d) None of these

Answer: ✅ (a) –1

Explanation:

When reading with getw() or similar functions, EOF is indicated by -1.

0 – Just a valid integer value, not EOF.

-9999 – Could be anything. Not standard.

None of these – Not correct because -1 is the standard.

13.4. Which of the following status-enquiry functions is used to detect I/O errors during file handling?
Options:

(a) feof()

(b) error()

(c) ferror()

(d) None of these

Answer: ✅ (c) ferror()

Explanation:

feof() – Checks whether end-of-file has been reached.

✅ ferror() – Checks whether an I/O error occurred while working with a file.

error() – Not a standard C function.

None of these – Not correct because ferror() is valid.
