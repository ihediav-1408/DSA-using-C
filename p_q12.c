#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n], i;
    printf("\nEnter the value of :\n");
    for (i = 0; i < n; i++)
    {
        printf("[%d]Element: ", i);
        scanf("%d", &arr[i]);
    }

    int max = 0, min = 0;
    max = min = arr[0];

    for (i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }

    printf("\nThe maximum of the element is %d and minimum of the element is %d", max, min);
    return 0;
}