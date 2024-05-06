#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//[hello]  i = 0
int length(char a[], int i)
{
    if (a[i] == '\0')
        return 0;
    int l = length(a, i + 1);
    return l + 1;
}

int main()
{
    char a[6] = "hello";
    int len = length(a, 0);
    printf("%d", len);
    return 0;
}
