#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    // printf("%p\n", &x); // addres of x

    int *p = &x;
    printf("%p\n", p);
    // de reference
    printf("%d", *p); // value of x

    *p = 500; // x=500

    return 0;
}