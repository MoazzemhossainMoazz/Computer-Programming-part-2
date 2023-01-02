#include<stdio.h>
int main()
{
    char c = 'A';
    char *p, **q;

    p=&c;
    q=&p;

    printf("c: %c\n", c);
    printf("p: %c\n", *p );
    printf("q: %c\n", **q);

    return 0;
}
