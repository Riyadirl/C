#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int x)
{
    int x = 100;
    printf("fun x er address - %p\n", &x); // 0061FF00
}

int main()
{
    int x = 10;
    printf("mainx er address - %p\n", &x); // 0061FF1C
    fun(x);

    printf("%d", x); // 10
    return 0;
}