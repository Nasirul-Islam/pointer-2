#include <stdio.h>
float area_circles(int x)
{
    return 3.14159 * x * x;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%.2f\n", area_circles(n));
}