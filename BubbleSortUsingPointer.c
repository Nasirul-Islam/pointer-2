#include <stdio.h>
int swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int i, j, n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}