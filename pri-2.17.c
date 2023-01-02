#include<stdio.h>
int main()
{
    char c = 'A';
    char *p, **q;

    p = &c; /// c = *p = 'A'
    q = &p; /// c = *p = **q = 'A'

    printf("c: %c\n", c);
    printf("*p: %c\n", *p);
    printf("**q: %c\n\n", **q);

    **q = 'B'; /// c = *p = **q = 'B'

    printf("c: %c\n", c);
    printf("*p: %c\n", *p);
    printf("**q: %c\n\n", **q);

    *p = 'C'; /// c = **q = *p = 'C'
    printf("c: %c\n", c);
    printf("*p: %c\n", *p);
    printf("**q: %c\n", **q);

    return 0;

}
