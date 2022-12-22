#include <stdio.h>
int even(int num)
{
    return ((num/2)*2 == num );
}
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(even(num) == 1)
    {
        printf("%d is even",num);
    }
    else
    {
        printf("%d is odd.",num);
    }
    return 0;
}