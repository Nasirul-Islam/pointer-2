#include <stdio.h>
int main()
{
    int i;
    char str[50];
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] % 2 == 0)
            str[i] -= 32;
    }
    printf("%s", str);
}