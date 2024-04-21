#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n; // input 5
    scanf("%d", &n);
    int ar[n + 1]; // ekghor beshi array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int pos, val;
    scanf("%d %d", &pos, &val);

    // 1 box to right
    for (int i = n; i >= pos + 1; i--)
    {//input position e ashle loop break hobe
        ar[i] = ar[i - 1];
    }

    ar[pos] = val;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}