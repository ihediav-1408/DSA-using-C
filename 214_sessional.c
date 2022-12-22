#include <stdio.h>
#include <stdlib.h>
int maxsize=10;
int top=-1;
char array[10];
void push(char data)
{
    if(top==maxsize)
    {
        printf("Overflow.");
    }
    else
    {
        top++;
        array[top]=data;
    }
}
char pop()
{
    char data;
    if(top==-1)
    {
        return "Underflow";
    }
    else
    {
        data=array[top];
        top--;
        return data;
    }
}
int main()
{
    int i,n;
    char da,da1;
    printf("\nEnter the size of the string less than 10.");
    scanf("%d",&n);
    printf("\nEnter the string.");
    for(i=0;i<n;i++)
    {
        scanf(" %c",&da);
        push(da);
    }
    printf("\nThe reversed string is as follows:");
    for(i=0;i<n;i++)
    {
        da1=pop();
        printf("%c",da1);
    }
    return 0;
}