#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char S[101];
        scanf("%s", S);

        int length = strlen(S);

        if (length <= 10)
        {
            printf("%s\n", S);
        }
        else
        {

            printf("%c%d%c\n", S[0], length - 2, S[length - 1]);
        }
    }

    return 0;
}
