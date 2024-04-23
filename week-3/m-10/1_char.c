#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%c", &a[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%c\n", a[i]);
    }

    ///////size off char

    char b[5];
    int size = sizeof(b) / sizeof(char);
    printf("%d", size);

    return 0;
}