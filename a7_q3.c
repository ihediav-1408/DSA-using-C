#include <stdio.h>
#include <stdlib.h>
void addition(int s[3][100], int t[3][100], int k, int l)
{
    int i = 0, j = 0, sparse[3][100], x = 0;
    while (i < k && j < l)
    {
        if ((s[0][i] == t[0][j]) && (s[1][j] == t[1][i]))
        {
            sparse[0][x] = s[0][i];
            sparse[1][x] = s[1][i];
            sparse[2][x] = t[2][j] + s[2][i];
            x++;
            i++;
            j++;
        }
        else
        {
            if (s[0][i] < t[0][j])
            {
                sparse[0][x] = s[0][i];
                sparse[1][x] = s[1][i];
                sparse[2][x] = s[2][i];
                x++;
                i++;
            }
            else
            {
                if ((s[0][i] == t[0][j]) && (s[1][i] < t[1][j]))
                {
                    sparse[0][x] = s[0][i];
                    sparse[1][x] = s[1][i];
                    sparse[2][x] = s[2][i];
                    x++;
                    i++;
                }
                else
                {
                    sparse[0][x] = s[0][j];
                    sparse[1][x] = s[1][j];
                    sparse[2][x] = s[2][j];
                    x++;
                    j++;
                }
            }
        }
    }
    while (i < k)
    {
        sparse[0][x] = s[0][i];
        sparse[1][x] = s[1][i];
        sparse[2][x] = s[2][i];
        x++;
        i++;
    }
    while (j < l)
    {
        sparse[0][x] = s[0][j];
        sparse[1][x] = s[1][j];
        sparse[2][x] = s[2][j];
        x++;
        j++;
    }
    printf("\n Addition Matrix is \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < x; j++)
        {
            printf("\t%d", sparse[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int m,n,k=0;
    int p,q,l=0;
    int i,j;
    printf("Enter no of rows of first matrix");
    scanf("%d",&m);
    printf("Enter no of columns of first matrix");
    scanf("%d",&n);
    int a[m][n];
    int s[3][100];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter %d%d element", i, j);
            scanf("%d", &a[i][j]);
            if (a[i][j] != 0)
            {
                s[0][k] = i;
                s[1][k] = j;
                s[2][k] = a[i][j];
                k++;
            }
        }
    }
    printf("\n Sparse matrix is \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < k; j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    printf("Enter no of rows of second matrix");
    scanf("%d", &p);
    printf("Enter no of columns of second matrix");
    scanf("%d", &q);
    int b[p][q];
    int t[3][100];
    if (p != m || q != n)
    {
        printf("\n Addtition can be performed on matrix of same order");
    }
    else
    {
        for (i = 0; i < p; ++i)
        {
            for (j = 0; j < q; ++j)
            {
                printf("Enter %d%d element", i, j);
                scanf("%d", &b[i][j]);
                if (b[i][j] != 0)
                {
                    t[0][l] = i;
                    t[1][l] = j;
                    t[2][l] = b[i][j];
                    l++;
                }
            }
        }
        printf("\n Sparse matrix is \n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < l; j++)
            {
                printf("%d ", t[i][j]);
            }
            printf("\n");
        }
        addition(s, t, k, l);
        return 0;
    }
}