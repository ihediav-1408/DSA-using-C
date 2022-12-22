#include<stdio.h>
int main()
{
    int n, m, sum=0;
    printf("\nEnter a number to check whether it is a armstrong number or not: ");
    scanf("%d", &n);
    int a=n;

    while(n>0)
    {
        m=n%10;
        sum+=m*m*m;
        n=n/10;
    }

    if (sum==a)
    {
        printf("\nIt is a armstrong number.\n");
    }
    else
    {
        printf("\nIt is NOT a armstrong number.\n");
    }

    return 0;
}