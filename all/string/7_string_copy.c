#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    for (int i = 0; i <= strlen(b); i++)
    {
        a[i] = b[i];
    }
    printf("%s %s", a, b);

    ///////////BUILT IN

    char a[100], b[100];
    scanf("%s %s", a, b);
    strcpy(a, b);
    printf("%s %s", a, b);

    return 0;
}