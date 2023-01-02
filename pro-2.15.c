#include<stdio.h>
int main()
{
    char c = 'A';
    char *p;
    p= &c;

    /// c=*p
    printf("p: %c\n", *p);
    printf("p: %d\n", c);
    printf("p: %d\n", p);
    printf("p: %d\n", &p);
    printf("p: %p\n", p);
    printf("p: %p\n", &p);

    return 0;

}
