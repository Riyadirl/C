#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // ceil>  3.3425  >> 4
    double x;
    scanf("%lf", &x);
    int ans = ceil(x);
    printf("%d\n", ans);

    // floor>  3.435 > 3
    double x;
    scanf("%lf", &x);
    int ans1 = floor(x);
    printf("%d\n", ans1);

    // round > 3.499 > 3  && 3.5>4
    double x;
    scanf("%lf", &x);
    int ans1 = round(x);
    printf("%d\n", ans1);

    // sqrt  root over
    int x;
    scanf("%d", &x);
    int ans1 = sqrt(x);
    printf("%d\n", ans1);

    // power a^b
    int x, y;
    scanf("%d %d", &x, &y);
    int ans = pow(x, y);
    printf("%d\n", ans);

    // abs pos> pos || neg>pos
    int x;
    scanf("%d", &x);
    int ans1 = abs(x);
    printf("%d\n", ans1);

    return 0;
}