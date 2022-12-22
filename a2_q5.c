#include <stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k,sum=0;
    printf("\nEnter the order of the first matrix:");
    printf("\nEnter the row:");
    scanf("%d",&r1);
    printf("\nEnter the column:");
    scanf("%d",&c1);
    int a[r1][c1];
    printf("Enter the elements.");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the order of the second matrix:");
    printf("\nEnter the row:");
    scanf("%d",&r2);
    printf("\nEnter the column:");
    scanf("%d",&c2);
    int b[r2][c2];
    printf("Enter the elements.");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[r1][c2];
    printf("\nMatrix 1:");
    printf("\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix 2:");
    printf("\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    printf("\nResultant Matrix:");
    printf("\n");
    if(r2==c1)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum=0;
                for(k=0;k<r2;k++)
                {
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("\t%d",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix Multiplication Invalid.");
    }
    return 0;
}