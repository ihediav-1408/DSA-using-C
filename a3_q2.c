#include <stdio.h>

int main()
{
    int i, n, temp;
    printf("Enter the number of elements.");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("\n The reversed array is:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}