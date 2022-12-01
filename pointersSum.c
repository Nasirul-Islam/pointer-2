#include <stdio.h>
int main()
{
    int x, y;
    float avg;
    int *p = &x, *q = &y;
    scanf("%d %d", p, q);
    avg = (float)(*p + *q) / 2;
    printf("%.3f\n", avg);
}