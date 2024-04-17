#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
        printf("%d\n", array[i]);
    }
    return 0;
}