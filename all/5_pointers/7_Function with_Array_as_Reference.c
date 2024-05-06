#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int *ar, int n)
{
    ar[2] = 23;
    ar[1] = 20;
}

int main()
{
    int ar[5] = {1, 2, 3, 4, 7};
    fun(ar, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]); // 1 20 23 4 7
    }

    return 0;
}