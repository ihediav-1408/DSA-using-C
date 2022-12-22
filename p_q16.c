#include<stdio.h>
int main()
{
    int m, n, i, j, count=0;
    printf("\nEnter the number of rows and columns of the matrix:  ");
    scanf("%d %d", &m, &n);

    int arr[m][n];

    printf("\nEnter the value of : \n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("\nElement[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
            if (i==j)
            {
                count+=arr[i][j];
            }
        }
    }

    printf("\nGiven Matrix:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of the diagonal elements is %d", count);

    return 0;
}