#include <stdio.h>

int main()
{
    int a = 0, b = 0, years = 0;
    scanf("%d %d", &a, &b);

    while (a <= b)
    {
        years++;
        a *= 3;
        b *= 2;
    }

    printf("%d", years);

    return 0;
}