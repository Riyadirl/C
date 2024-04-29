#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// global
int x = 89;

void myFunction()
{
    int x = 10;           // x has function scope
    printf("x: %d\n", x); // x is visible here
}

int main()
{
    myFunction();
    // printf("%d\n", x); // This line would cause an error because x is not visible here
    return 0;
}
