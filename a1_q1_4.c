#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number.");
    scanf("%d",&n);
    if(((n>>1)<<1)==n)
    {
       printf("%d is a Even number",n);
    }    
    else
    {
       printf("%d is a Odd number",n);
    }
    return 0;
}