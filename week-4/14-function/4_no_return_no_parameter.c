#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// no return means void
void sum(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int s = x + y;
    printf("%d\n", s);
}

int main()
{
    sum();
    return 0;
}