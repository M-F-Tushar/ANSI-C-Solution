
13.11 Write a C program that uses file handling methods to store
records of mixed data in a file.

#include <stdio.h>

struct Record {
    int id;
    float salary;
    char name[50];
};

int main() {
    FILE *fp;
    struct Record record;

    fp = fopen("records.dat", "w");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter the ID, salary, and name for the record:\n");
    printf("ID: ");
    scanf("%d", &record.id);
    printf("Salary: ");
    scanf("%f", &record.salary);
    printf("Name: ");
    scanf("%s", record.name);

    fwrite(&record, sizeof(record), 1, fp);

    fclose(fp);
    printf("Record written to file.\n");

    return 0;
}
