#include<stdio.h>
int main()
{
    int n, m=0, rev=0;
    printf("\nEnter a numver to reverse: ");
    scanf("%d", &n);
    int a=n;

    while(n>0)
    {
        m=n%10;
        rev = rev*10+m;
        n=n/10;
    }

    printf("\nThe reverse of %d is %d", a, rev);
    return 0;
}