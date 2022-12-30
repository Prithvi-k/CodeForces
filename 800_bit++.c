#include <stdio.h>

int main()
{
    int n = 0, x = 0;
    char c[3];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", c);
        if (c[1] == '+' && (c[0] == '+' || c[2] == '+'))
        {
            x++;
        }
        else if (c[1] == '-' && (c[0] == '-' || c[2] == '-'))
        {
            x--;
        }
    }
    printf("%d", x);
    return 0;
}