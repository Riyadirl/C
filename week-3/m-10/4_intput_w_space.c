#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[18];
    gets(a);
    printf("%s", a);

    //////////////

    char b[18];
    fgets(b, 10, stdin);
    printf("%s", b);

    return 0;
}