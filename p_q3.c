#include<stdio.h>
int main()
{
    int n, i, fact=1;
    printf("\nEnter a number to find the factorial: ");
    scanf("%d", &n);

    for (i=n;i>=1;i--)
    {
        fact *= i;
    }

    printf("\nThe factorial of %d is %d", n, fact);
    return 0;
}