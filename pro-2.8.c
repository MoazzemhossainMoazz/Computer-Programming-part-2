
#include<stdio.h>
int main()
{
    int x = 10, y;
    int *p, *q;

    p = &x;

    /// x = *p = 10
    q = &y;
    /// y = *q = other value
    printf("*q: %d\n", *q);

    y = *p;
    /// y = 10
    printf("y: %d\n", y);

    *p = 15;
    /// x = *p = 15
    *q = 20;
    /// y = *q = 20;



    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("*p: %d\n", *p);
    printf("*q: %d\n", *q);

    printf("x: %d\n", &x);
    printf("y: %d\n", &y);
    printf("*p: %d\n", p);
    printf("*q: %d\n", q);

    return 0;
}
