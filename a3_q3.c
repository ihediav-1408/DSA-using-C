#include <stdio.h>

int main()
{
    int i,n,ele,flag=0;;
    printf("Enter the number of elements.");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched.");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Element found at position %d.",i+1);
    }
    else
    {
        printf("Element not found.");
    }
    return 0;
}