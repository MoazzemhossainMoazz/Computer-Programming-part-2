#include<stdio.h>
int main()
{
    int x = 10;
    int *p;

    p = &x;
    printf("X value: %d\n", x);

    *p = 20;
    printf("X vlue: %d\n", x);
    printf("X address: %p\n", &x);
    printf("p vlaue: %p\n", p);

    printf("&p vlaue: %p\n", &p);
    printf("p vlaue: %d\n", p);

    return 0;
}
