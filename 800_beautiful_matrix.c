#include <stdio.h>

int main()
{
    int arr[5][5], row = 0, column = 0, rowChanges = 0, columnChanges = 0, reqChanges = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 1)
            {
                row = i;
                column = j;
            }
        }
    }

    rowChanges = ((row - 2) >= 0) ? (row - 2) : (2 - row);
    columnChanges = ((column - 2) >= 0) ? (column - 2) : (2 - column);

    reqChanges = rowChanges + columnChanges;

    printf("%d", reqChanges);

    return 0;
}