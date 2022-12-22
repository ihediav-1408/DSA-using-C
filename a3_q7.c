#include <stdio.h>

void diagonal(int n, int a[][n])
{
    int i,j, maj=0, min=0, p=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
            {
                maj+=a[i][j];
            }
            else if(i>j)
            {
                min+=a[i][j];
            }
            else
            {
                p*=a[i][j];
            }
        }
    }
    printf("\nThe sum of elements above the diagonal is %d.",maj);
    printf("\nThe sum of elements below the diagonal is %d.",min);
    printf("\nThe product of diagonal elements is %d.",p);
}
void nonzero(int n, int a[][n])
{
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                c++;
            }
        }
    }
    printf("\nThe number of nonzero elements are %d.",c);
}
int main()
{
    int i,j,n;
    printf("\nEnter the size.");
    scanf("%d",&n);
    int a[n][n];
    printf("\nEnter the elements.");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    nonzero(n,a);
    diagonal(n,a);
    return 0;
}