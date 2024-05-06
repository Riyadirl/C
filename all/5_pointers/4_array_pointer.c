#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int ar[3] = {3, 5, 3, 6};

    // ar == *p >address
    printf("0 th index er addrrss- %p\n", &ar[0]); // 0061FF14
    printf("0 th index er addrrss- %p\n", ar);     // 0061FF14


    // ar[0] ==*ar  >value
    printf("0 th index er value- %d\n", ar[0]); // 3
    printf("0 th index er value- %d\n", *ar);   // 3


    // 1st index value
    printf("1 st index er value- %d\n", ar[1]);     // 5
    printf("1 st index er value- %d\n", *(ar + 1)); // 5

    return 0;
}