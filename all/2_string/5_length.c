#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[100];
    scanf("%s", a);

    int count = 0;

    for (int i = 0; i < a[i] != NULL; i++)
    {
        count++;
    }
    printf("%d", count);

    /////   WHILE     /////

    int i = 0;
    while (a[i] != NULL)
    {
        count++;
        i++;
    }
    printf("%d", count);

    /////built in function///

    int st = strlen(a);
    printf("%d", st);

    return 0;
}