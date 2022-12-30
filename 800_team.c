#include <stdio.h>

int main()
{
    int n, solved = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int canSolve = 50, count = 0;
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &canSolve);
            if (canSolve == 1)
            {
                count++;
            }
        }
        if (count > 1)
        {
            solved++;
        }
    }

    printf("%d", solved);
    return 0;
}