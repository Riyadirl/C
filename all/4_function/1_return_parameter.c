#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    int s = sum(243, 8);
    printf("%d\n", s);

    printf("%d", sum(42, 876));
    return 0;
}