#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("\nEnter a number for the square matrix: ");
    scanf("%d", &n);

    int a[n][n], b[n][n], mul[n][n], sum[n][n];

    printf("\nEnter the value of first matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nElement[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the value of second matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nElement[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nGiven first Matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nGiven second Matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nADDITION:\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            mul[i][j]=0;
            for (k=0;k<n;k++)
            {
                mul[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    printf("\nMULTIPLICATION:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}