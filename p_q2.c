#include <stdio.h>
int main()
{
    int n, sum=0, i, a;
    printf("\nEnter the total number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%d Element: ", i + 1);
        scanf("%d", &a);
        sum += a;
    }

    printf("\nThe sum of all the elements are: %d", sum);
    return 0;
}