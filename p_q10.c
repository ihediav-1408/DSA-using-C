#include <stdio.h>
#include <math.h>

int main()
{
    int n, rem = 0, m = 0, base = 1, ch;
    printf("\nPress 1: To convert binary to decimal.\nPress 2: To decimal to binary.");
    printf("\nPRESS A BUTTON: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    {
        printf("\nEnter the number: ");
        scanf("%d", &n);
        int a = n;
        while (n > 0)
        {
            rem = n % 10;
            m += rem * base;
            n = n / 10;
            base *= 2;
        }
        printf("\nThe decimal number of the binary number %d is %d", a, m);
        break;
    }
    case 2:
    {
        printf("\nEnter the number: ");
        scanf("%d", &n);
        int a = n;
        int binary[20], i = 0, j;
        while (n > 0)
        {
            binary[i] = n % 2;
            n = n / 2;
            i++;
        }
        printf("\nThe binary number of the decimal number %d is: ",a );
        for (j=i-1;j>=0;j--)
        {
            printf("%d", binary[j]);
        }

    }
    }
    return 0;
}