#include<stdio.h>
#include<string.h>
#include<stdbool.h>

char dest[]   = "..........................";
char source[] = "abcdefghijklmnopqrstuvwxyz";

int main() {

    size_t n;

    while(true) {
        puts("Enter the number of characters to copy (1-26)");
        scanf("%ld", &n);

        if (n > 0 && n < 27) break;
    }

    printf("\nBefore strncopy the destination = %s\n", dest);

    strncpy(dest, source, n);

    printf("\nAfter strncpy the destination = %s\n", dest);

    return 0;
}