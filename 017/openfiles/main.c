#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define __EXIT_OPTION puts("Enter x to exit, or any other key to continue"); \
                    if ((ch = getc(stdin) == 'x')) break; \
                    else continue;

#define MAX_FILE_SIZE 256
#define MAX_FILE_MODE_SIZE 3

int main() {
    FILE *fp;
    char ch, filename[MAX_FILE_SIZE], mode[MAX_FILE_MODE_SIZE];

    while(true) {
        //input filename and mode.
        puts("\nEnter a filename: ");
        fgets(filename, MAX_FILE_SIZE, stdin);  
        filename[strcspn(filename, "\n")] = 0;

        puts("\nEnter a mode (max. 3 characters)");
        fgets(mode, MAX_FILE_MODE_SIZE, stdin);
        mode[strcspn(mode, "\n")] = 0;

        //try open the file
        if ((fp = fopen(filename, mode)) != NULL) {
            printf("\nSuccessful opening %s in mode %s.\n", filename, mode);
            fclose(fp);
            __EXIT_OPTION
        }
        else {
            fprintf(stderr, "\nError opening file %s in mode %s.\n", filename, mode);
            __EXIT_OPTION

        }
    }

    return 0;
}