#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

    size_t length;
    char buffer[80];

    while(true) {
        puts("\nEnter a line of text, a blank line to exit.");
        fgets(buffer, 80, stdin);
        buffer[strcspn(buffer, "\n")] = 0; //remove endlines

        length = strlen(buffer);

        if (length != 0)
            printf("\nThat line is %lu characters long.", length);
        else
            break;    
    }

    return 0;
}