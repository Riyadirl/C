#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // int
    int x = 100;
    int *ptr = &x;

    x = 200; // or *ptr =200
             // printf("x er value - %d\n", x);
             // printf("x er value - %d\n", *ptr);

    //  printf("x er address - %p\n", &x);//0061FF1C
    // printf("ptr er value - %p\n", ptr);//0061FF1C
    // printf("ptr er address - %p\n", &ptr);//0061FF18

    // double
    double a = 2.44;
    double *p = &a;
    // x == *p

    return 0;
}