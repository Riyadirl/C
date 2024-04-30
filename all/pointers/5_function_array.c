#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}
int main()
{
    int ar[5] = {1, 2, 3, 4, 5};
    fun(ar, 5);
    return 0;
}