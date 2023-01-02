#include<stdio.h>
int main()
{
    double pi = 3.1416;
    int *ptr;
    ptr = &pi;

    printf("1value of pi: %lf\n", pi); //3.1416
    printf("2value of ptr: %lf\n", *ptr); ///3.1416
    printf("3value of ptr: %d\n", ptr); ///
    printf("4value of pi: %d\n", pi);///3
    printf("5value of ptr: %p\n", ptr); ///
    printf("6value of pi: %p\n", pi);
    printf("2value of ptr: %p\n", *ptr);
    //printf("6value of pi: %p\n", *pi);



    return 0;

}
