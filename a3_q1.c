#include <stdio.h>

void minmax(int a[], int n)
{
    int min=0, max=0;
    int i;
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("The smallest element is %d.\n",min);
    printf("The largest element is %d.\n", max);
}
int main()
{
    int i,n;
    printf("Enter the number of elements in the array.\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    minmax(a,n);
    return 0;
}