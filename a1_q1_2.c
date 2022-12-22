#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number.");
    scanf("%d",&n);
    if((n & 1)==1)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
    return 0;
}