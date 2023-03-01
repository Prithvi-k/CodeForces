#include <stdio.h>
#include <string.h>

int main()
{
    char players[100];
    int count_zeroes = 0, count_ones = 0, dangerous = 0;

    scanf("%s", players);

    for (int i = 0; i < strlen(players); i++)
    {
        if (players[i] == '0')
        {
            count_zeroes++;
            count_ones = 0;
        }
        else if (players[i] == '1')
        {
            count_ones++;
            count_zeroes = 0;
        }
        if (count_zeroes == 7 || count_ones == 7)
        {
            dangerous = 1;
            break;
        }
    }

    if (dangerous == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}