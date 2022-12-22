#include <stdio.h>

int main()
{
    int n,i,j,ele;
    int ll,ul;
    printf("Enter the number of elements of the array.");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements of the array.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-1-i);j++)
        {
            if(a[j]>a[j+1])
            {
               ele=a[j];
               a[j]=a[j+1];
               a[j+1]=ele;
            }
        }
    }
    printf("The sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\nEnter the lower limit.\n");
    scanf("%d",&ll);
    printf("Enter the upper limit.\n");
    scanf("%d",&ul);
    printf("The elements within the given range are:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]>=ll && a[i]<=ul)
        {
            printf("%d",a[i]);
        }
    }
    return 0;
}