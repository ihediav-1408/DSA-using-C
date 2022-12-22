#include <stdio.h>
int main()
{
    int k=1;
    int i,j,m,n;
    printf("Enter row and column.");
    scanf("%d%d",&m,&n);
    int a[m][n];
    int s=0;
    while(s<n)
    {
    for(i=0;i<m;i++)
    {
        a[i][s]=k;
        k++;
    }
    s++;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}