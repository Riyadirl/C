#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    int element = row * col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        { // i row j coll
            scanf("%d", &a[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (element == count)
    {
        printf("zero matrix");
    }
    else
    {
        printf("NON ZERO");
    }

    return 0;
}