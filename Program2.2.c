#include <stdio.h>

int main(void) 
{
    int c, i;

    for (i = 0; ((i < 999) + ((c=getchar()) != EOF) + (c != '\n')) == 3; ++i) {
        putchar(c);
    }
}
