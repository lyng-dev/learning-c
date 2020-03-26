#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    float f1, f2, f3, f4, f5;
    FILE *fp;

    if ((fp = fopen("numberinput.txt", "r")) == NULL)
    {
        fprintf(stderr, "Error opening the file\n");
        exit(1);
    }

    fscanf(fp, "%f %f %f %f %f", &f1, &f2, &f3, &f4, &f5);

    printf("The values from the file are: %f %f %f %f %f", f1, f2, f3, f4, f5);

    fclose(fp);

    return 0;
}