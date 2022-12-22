#include<stdio.h>
int main()
{
    int n, flag=0, pos;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n], i, x;
    printf("\nEnter the valur of :\n");
    for (i=0;i<n;i++)
    {
        printf("\n[%d]Element: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element you want to search: ");
    scanf("%d", &x);

    for (i=0;i<n;i++)
    {
        if (arr[i]==x)
        {
            flag=1;
            pos=i;
        }
    }

    if (flag==1)
    {
        printf("\nThe element %d is present at the index %d", x, pos);
    }
    else
    {
        printf("\nElement NOT found.");
    }
    return 0;
}