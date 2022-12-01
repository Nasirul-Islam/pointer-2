#include <stdio.h>
int sumOfUglyNum(int arr[], int n)
{
    int i, x, sum = 0;
    for (i = 0; i < n; i++)
    {
        x = arr[i] % 10;
        if (x == 0)
            sum += arr[i];
    }
    return sum;
}
int main()
{
    int n, i, x, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sum = sumOfUglyNum(arr, n);
    printf("%d\n", sum);
}