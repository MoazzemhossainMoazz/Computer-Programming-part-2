#include<stdio.h>
int main()
{
    int x = 10;
    int *p;

    printf("value of x: %d\n", x);

    p = &x;
    *p = 20;

    printf("value of x: %d\n", x);
    x=15;

    printf("value of x: %d\n", x);
    printf("value stored at location %p is %d\n", p, *p);

    printf("Address of x: %p\n", &x);
    printf("vlaue of p: %p\n", p);

    return 0;
}
