#include<stdio.h>
int main()
{
    char c = 'A';
    char *p, **q, ***r;

    p = &c; /// c = *p = 'A'
    q = &p; /// c = *p = **q = 'A'
    r = &q;  /// c = *p = **q = ***r = 'A'

    printf("c: %c\n", c);
    printf("*p: %c\n", *p);
    printf("**q: %c\n", **q);
    printf("***r: %c\n\n", ***r);

    **q = 'B'; /// c = *p = **q = 'B'

    printf("c: %c\n", c);
    printf("*p: %c\n", *p);
    printf("**q: %c\n", **q);
    printf("***r: %c\n\n", ***r);

    *p = 'C'; /// c = **q = *p = 'C'
    printf("c: %c\n", c);
    printf("*p: %c\n", *p);
    printf("**q: %c\n", **q);
    printf("***r: %c\n\n", ***r);

    return 0;

}

