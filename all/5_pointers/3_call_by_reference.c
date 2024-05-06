#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int *p)
{
    *p = 100;
}

int main()
{
    int x = 10;

    fun(&x);

    return 0;
}