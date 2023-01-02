#include<stdio.h>
int main()
{
    int x = 10;
    int *p;

    p = &x;

    printf("*p when parcent d = %d\n", *p);
    printf("p when parcent p = %p\n", p);
    printf("*p when parcent p = %p\n", *p);
    printf("p when parcent d = %d\n", p);

    //printf("*x when parcent d = %d\n", *x);
    printf("x when parcent p = %p\n", x);
    //printf("*x when parcent p = %p\n", *x);
    printf("x when parcent d = %d\n", x);

    return 0;
}
