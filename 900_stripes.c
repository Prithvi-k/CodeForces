#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        char stripes[8][8];
        int count_R = 0, count_B = 0, flag = 0;
        char ans;

        for (int j = 0; j < 8; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                scanf("%s[^\n]", stripes[j][k]);
            }
        }

        for (int m1 = 0; m1 < 8; m1++)
        {
            count_B = 0;
            count_R = 0;
            for (int m2 = 0; m2 < 8; m2++)
            {
                if (stripes[m2][m1] == 'R')
                {
                    count_R++;
                }
                else if (stripes[m2][m1] == 'B')
                {
                    count_B++;
                }
            }

            if (count_R == 8)
            {
                flag = 1;
                ans = 'R';
                break;
            }
            else if (count_B == 8)
            {
                flag = 1;
                ans = 'B';
                break;
            }
        }

        for (int n1 = 0; n1 < 8; n1++)
        {
            count_B = 0;
            count_R = 0;
            for (int n2 = 0; n2 < 8; n2++)
            {
                if (stripes[n1][n2] == 'R')
                {
                    count_R++;
                }
                else if (stripes[n1][n2] == 'B')
                {
                    count_B++;
                }
            }

            if (count_R == 8)
            {
                flag = 1;
                ans = 'R';
                break;
            }
            else if (count_B == 8)
            {
                flag = 1;
                ans = 'B';
                break;
            }
        }

        printf("%c\n", ans);
    }

    return 0;
}