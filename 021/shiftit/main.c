#include<stdio.h>

#define __HEADER(direction) printf("Decimal\t\tshift %s by\tresult\n", direction)
#define __RESULT(x,count,y) printf("%d\t\t%d\t\t%d\n", x, count, y)

int main() {

    unsigned int y, x = 255;
    int count;

    __HEADER("left");
    for (count = 1; count < 8; count++) {
        y = x << count;
        __RESULT(x,count,y);
    }

    __HEADER("right");
    for (count = 1; count < 8; count++) {
        y = x >> count;
        __RESULT(x,count,y);
    }

    return 0;
}