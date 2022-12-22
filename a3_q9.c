#include <stdio.h>

int main()
{
    int n,i,j,k=0;
    printf("Enter the number of elements of the array.");
    scanf("%d",&n);
    int a[n],b[n];
    printf("\nEnter the elements of the array.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[k]=a[i];
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            b[k]=a[i];
            k++;
        }
    }
    printf("\nThe resultant array is: ");
    for(k=0;k<n;k++)
    {
        printf("%d\n",b[k]);
    }
    return 0;
}