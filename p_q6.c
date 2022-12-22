#include<stdio.h>

int main()
{
    int n, i, flag=0;
    printf("\nEnter a number to check whether it is a prime number or not: ");
    scanf("%d", &n);

    if (n==0||n==1)
    {
        flag=1;
    }
    else
    {
        for (i=2;i<n/2;i++)
        {
            if (n%i==0)
            {
                flag =1;
            }
        }
    }

    if (flag ==1)
    {
        printf("\nNOT a prime number.\n");
    }
    else
    {
        printf("\nIt is a prime number.\n");
    }
    return 0;
}