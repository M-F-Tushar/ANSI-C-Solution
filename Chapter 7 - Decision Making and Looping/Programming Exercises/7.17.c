7.17 Write a C Program to Display a Colored Line
C does not support colors in the standard output directly.
However, you can use ANSI escape codes (for Linux/macOS) or Windows API (for Windows).
Linux/macOS (ANSI Escape Codes):

#include <stdio.h>

int main() {
    printf("\033[1;31mThis is a red-colored line\033[0m\n");
    return 0;
}
Windows (Using system call):


#include <windows.h>
#include <stdio.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4); // Red color
    printf("This is a red-colored line\n");
    SetConsoleTextAttribute(hConsole, 7); // Reset to default
    return 0;
}

