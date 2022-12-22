#include <stdio.h>

void nge(int a[], int n)
{
    int i,j,next;
    for(i=0;i<n;i++)
    {
        next=-1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                next=a[j];
                break;
            }
        }
        printf("\nNGE of %d element is %d.",i+1,next);
    }
}
int main()
{
    int i,n;
    printf("Enter the number of elements.");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    nge(a,n);
    return 0;
}
