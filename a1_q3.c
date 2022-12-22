#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of 4 byte blocks.");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int b1=a<<24;
    int b2=b<<16;
    int b3=c<<8;
    int b4=d;
    int n=(b1 | b2 | b3 | b4);
    printf("The number is %d.",n);
    return 0;
}