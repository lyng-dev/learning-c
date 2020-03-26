#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char source[] = "The source string";

int main() {

    char dest1[80];
    char *dest2, *dest3;

    printf("\nSource: %s\n", source);

    strcpy(dest1, source);

    printf("\nDest1: %s\n", dest1);

    //copy to a pointer, there you must allocate space, because that memory has not already been allocated.
    //as it has in dest1[80]
    dest2 = (char *)malloc(strlen(source) + 1);
    strcpy(dest2, dest1);
    printf("\nDest2: %s\n", dest2);

    //copying without allocating ccould cause serious problems
    //strcpy(dest3, source);

    return 0;
}