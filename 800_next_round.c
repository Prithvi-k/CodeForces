#include <stdio.h>

int main()
{
    int n, k, score, kth_score = 0, count = 0;
    scanf("%d %d", &n, &k);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    kth_score = arr[k - 1];

    for (int j = 0; j < n; j++)
    {
        if (arr[j] >= kth_score && arr[j] > 0)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}