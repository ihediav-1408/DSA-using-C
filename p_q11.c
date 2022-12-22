#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int a[n], b[n], sum[n];
    printf("\nEnter the value of first aaray: \n");
    for (int i=0;i<n;i++)
    {
        printf("\n[%d]Element: ", i);
        scanf("%d", &a[i]);
    }

     printf("\nEnter the value of second aaray: \n");
    for (int i=0;i<n;i++)
    {
        printf("\n[%d]Element: ", i);
        scanf("%d", &b[i]);
    }

    for (int i=0;i<n;i++)
    {
        sum[i]=a[i]+b[i];
    }

    printf("\nThe sum of the given matrix is:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t", sum[i]);
    }
    return 0;
}