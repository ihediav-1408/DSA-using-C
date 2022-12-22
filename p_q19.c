#include <stdio.h>
int main()
{
    int x, y, *a, *b, temp;
    printf("\nEnter value of x and y: ");
    scanf("%d %d", &x, &y);

    a = &x;
    b = &y;
    
    temp=*a;
    *a=*b;
    *b=temp;

    printf("\nAfter swaping\nx = %d\ny = %d", *a, *b);


    return 0;
}