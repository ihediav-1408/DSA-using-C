#include <stdio.h>

int main()
{
    int n, sum = 0, m;
    printf("\nEnter a number:");
    scanf("%d", &n);
    int a=n;

    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    printf("\nThe sum of the digits of %d is %d", a, sum);

    return 0;
}