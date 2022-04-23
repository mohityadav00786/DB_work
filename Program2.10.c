#include<stdio.h>

int lower(int c);

int main(void)
{
    int c;
    
    printf("Enter any Upper case Letter:");
    while((c=getchar())!=EOF)
    {
        putchar(lower(c));
    }
}

int lower(int c)
{
    return c>='A' && c<='Z'? c+'a'-'A':c;
}

