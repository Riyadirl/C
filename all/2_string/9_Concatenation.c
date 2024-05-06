#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[200], b[200];
    scanf("%s %s", a, b);

    //////////1
    int k = strlen(a);
    for (int i = 0; i < strlen(b); i++)
    {
        a[k] = b[i];
        k++;
    }
    printf("%s %s", a, b);

    //////function/////2

    char a[200], b[200];
    scanf("%s %s", a, b);
    strcat(a, b);
    printf("%s %s", a, b);


    ///////////
    // apple orange
    //  copy ora from orange
    int k = strlen(a);
    for (int i = 0; i < strlen(b); i++)
    {
        a[k] = b[i];
        k++;
    }
    a[k] = '\0';
    printf("%s %s", a, b);

    return 0;
}