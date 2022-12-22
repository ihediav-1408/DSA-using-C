#include <stdio.h>
int main()
{
    int m,n,i,j,c=0;
    printf("Enter the number of rows in the matrix.");
    scanf("%d",&m);
    printf("Enter the number of columns in the matrix.");
    scanf("%d",&n);
    int s[m][n];
    printf("Enter the elements of the sparse matrix.");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&s[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[i][j]!=0)
            {
                c++;
            }
        }
    }
    int a[3][c];
    int k=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[i][j]!=0)
            {
                a[0][k]=i;
                a[1][k]=j;
                a[2][k]=s[i][j];
                k++;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}