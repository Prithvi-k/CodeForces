#include <stdio.h>

int main()
{
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < k; i++)
    {
        if (n % 10 != 0)
        {
            n--;
        }
        else
        {
            n /= 10;
        }
    }

    printf("%d", n);

    return 0;
}