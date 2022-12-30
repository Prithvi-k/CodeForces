#include <stdio.h>

int main()
{
    int n, flag = 0, thousands, hundreds, tens, ones;
    scanf("%d", &n);

    while (flag != 1)
    {
        ++n;
        thousands = (n / 1000);
        hundreds = ((n / 100) % 10);
        tens = ((n / 10) % 10);
        ones = (n % 10);
        if ((thousands != hundreds) && (thousands != tens) && (thousands != ones) && (hundreds != tens) && (hundreds != ones) && (tens != ones))
        {
            flag = 1;
            printf("%d", n);
        }
    }

    return 0;
}