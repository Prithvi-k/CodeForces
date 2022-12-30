#include <stdio.h>

int main()
{
    long int n, count = 0;
    scanf("%ld", &n);

    while (n > 0)
    {
        if (((n % 10) == 4) || ((n % 10) == 7))
        {
            count++;
        }
        n /= 10;
    }

    if (count == 4 || count == 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    // printf("count = %ld", count);
    return 0;
}