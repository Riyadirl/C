#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    // input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        { // i row j coll
            scanf("%d", &a[i][j]);
        }
    }

    // exact row print
    int exact;
    scanf("%d", &exact);
    for (int i = 0; i < col; i++)
    {
        printf("%d ", a[exact][i]);
    }

    // exact colmun
    int exact;
    scanf("%d", &exact);
    for (int i = 0; i < row; i++)
    {
        printf("%d \n", a[i][exact]);
    }

    return 0;
}