#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // declare 2d array
    int a[5][3];
    // input
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        { // i row j coll
            scanf("%d", &a[i][j]);
        }
    }
    // output
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("a[%d] ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}