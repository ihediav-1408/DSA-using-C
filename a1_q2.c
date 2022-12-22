#include <stdio.h>
int main()
{
    int n;
    printf("Enter a 4 digit number.");
    scanf("%d",&n);
    int b1=(n>>24)&0xff;
    int b2=(n>>16)&0xff;
    int b3=(n>>8)&0xff;
    int b4=(n)&0xff;
    printf("The content of b1 is %d.",b1);
    printf("The content of b2 is %d.",b2);
    printf("The content of b3 is %d.",b3); 
    printf("The content of b4 is %d.",b4);
    return 0;
}