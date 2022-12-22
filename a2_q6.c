#include <stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter the order of the matrix.");
    scanf("%d",&n);
    int a[n][n];
    i=n-1;
    j=n/2;
    k=1;
    while(k<((n*n)+1))
    {
        a[i][j]=k;
        if(k%n==0)
        {
            i--;
        }
        else if(i==(n-1)&&j==0)
        {
            i--;
        }
        else if(i==(n-1))
        {
            i=0;
            j--;
        }
        else if(j==0)
        {
            j=n-1;
            i++;
        }
        else
        {
            j--;
            i++;
        }
        k++;
    }
    printf("\nMAGIC MATRIX\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}