13.2 Two files DATA1 and DATA2 contain sorted lists of
integers. Write a program to produce a third file DATA which
holds a single sorted, merged list of these two lists. Use command
line arguments to specify the file names.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *f1, *f2, *fout;
    int a, b;
    int read1, read2;

    if (argc != 4) {
        printf("Usage: %s file1 file2 outputfile\n", argv[0]);
        return 1;
    }

    f1 = fopen(argv[1], "r");
    f2 = fopen(argv[2], "r");
    fout = fopen(argv[3], "w");

    if (f1 == NULL || f2 == NULL || fout == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    read1 = fscanf(f1, "%d", &a);
    read2 = fscanf(f2, "%d", &b);

    while (read1 == 1 && read2 == 1) {
        if (a < b) {
            fprintf(fout, "%d ", a);
            read1 = fscanf(f1, "%d", &a);
        } else {
            fprintf(fout, "%d ", b);
            read2 = fscanf(f2, "%d", &b);
        }
    }

    while (read1 == 1) {
        fprintf(fout, "%d ", a);
        read1 = fscanf(f1, "%d", &a);
    }

    while (read2 == 1) {
        fprintf(fout, "%d ", b);
        read2 = fscanf(f2, "%d", &b);
    }

    fclose(f1);
    fclose(f2);
    fclose(fout);
    printf("Files merged into %s successfully.\n", argv[3]);

    return 0;
}
