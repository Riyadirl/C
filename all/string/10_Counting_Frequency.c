#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    ///////////////1

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                zero++;
            }
            if (a[i] == 1)
            {
                one++;
            }
        }
        printf("0 -  %d\n", zero);
        printf("1 -  %d", one);
        

    ///////////2

    int cnt[7] = {0};
    for (int i = 0; i < n; i++)
    {
        // int val= a[i];
        // cnt[val]++;

        cnt[a[i]]++;
    }
    
    /// print way 1
    /*
    printf("0 -  %d\n", cnt[0]);
     printf("1 -  %d\n", cnt[1]);
     printf("2 -  %d\n", cnt[2]);
     printf("3-  %d\n", cnt[3]);
     printf("4-  %d\n", cnt[4]);
     printf("5 -  %d\n", cnt[5]);
     printf("6 -  %d\n", cnt[6]);
     */


    // print loop
    for (int i = 0; i < 7; i++)
    {
        printf("%d - %d\n", i, cnt[i]);
    }

    return 0;
}