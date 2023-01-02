#include<stdio.h>
int main()
{

    char s[] = "Bangladesh";
    char *p;

    p = s; /// p = &s; it's also possible

    printf("Country: %s\n", p);
    return 0;
}
