#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /*
    n = 5

    * * * * *
    * * * *
    * * *
    * *
    *

     */
    int n;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}