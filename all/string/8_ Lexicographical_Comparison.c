#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    ////////////1

    int i = 0;
    while (1)
    {
        // null check
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same\n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("a choto\n");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("b choto\n");
            break;
        }

        // choto check
        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("a choto\n");
        }
        else
        {
            printf("b choto\n");
        }
    }

    ///////////2
    
    char a[100], b[100];
    scanf("%s %s", a, b);
    int v = strcmp(a, b);
    // printf("%d", v);//print the value

    if (v < 0)
    {
        printf("A small");
    }
    else if (v > 0)
    {
        printf("B small");
    }
    else
    {
        printf("same");
    }

    return 0;
}