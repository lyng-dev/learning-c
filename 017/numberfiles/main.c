#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILENAME 256

void clear_kb();

void clear_kb() {
    char junk[MAX_FILENAME]; 
    fgets(junk, MAX_FILENAME, stdin); 
}

int main() {

    FILE *fp;
    float data[5];
    int count;
    char filename[MAX_FILENAME];

    puts("Enter 5 floating-point numerical values.");

    for (count = 0; count < 5; count++) {
        scanf("%f", &data[count]);
    }

    /* Get the filename and open the file. First clear stdin */
    clear_kb();
    puts("\nEnter a filename: ");
    fgets(filename, MAX_FILENAME, stdin);
    filename[strcspn(filename, "\n")] = 0;

    if ((fp = fopen(filename, "w")) == NULL) {
        fprintf(stderr, "Error opening file %s.", filename);
        exit(1);
    }

    //write the numerical data to the file and t"o stdout.
    for (count = 0; count < 5; count++) {
        fprintf(fp, "\ndata[%d] = %f", count, data[count]);
        fprintf(stdout, "\ndata[%d] = %f", count, data[count]);
    }
    fclose(fp);
    puts("");
    return 0;
}