#include <stdio.h>
#include <string.h>

int main()
{
    int T, len;
    char str[101];
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%c", str);
        len = strlen(str);

        if ((len % 2) != 0)
        {
            printf("NO\n");
        }
        for (int j = 0; j < (len / 2); j++)
        {
            if (str[i] != str[(len / 2) + i])
            {
                printf("NO\n");
            }
        }
        printf("YES\n");
    }

    return 0;
}