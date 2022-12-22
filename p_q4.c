#include<stdio.h>
int main()
{
    int n, i, even=0, odd=0;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            even +=i;
        }
        else
        {
            odd+=i;
        }
    }

    printf("\nSum of the even numbers: %d", even);
    printf("\nSum of the odd numbers: %d", odd);
    return 0;
}