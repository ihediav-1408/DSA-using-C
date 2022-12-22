#include<stdio.h>
int main()
{
    int ch;
    float a, b;
    float sum, sub, mul, div;
    printf("\nEnter \n 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division\n  : ");
    scanf("%d", &ch);
    printf("\nEnter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (ch)
    {
        case 1:
        {
            sum=a+b;
            printf("\nSUM: %.2f", sum);
            break;
        }
        case 2:
        {
            sub=a-b;
            printf("\nSUBTRACTION: %.2f", sub);
            break;
        }
        case 3:
        {
            mul = a*b;
            printf("\nMULTIPLICATION: %.2f", mul);
            break;
        }
        case 4:
        {
            div= a/b;
            printf("\nDIVISION: %.2f", div);
            break;
        }
        default:
        {
            printf("\nINVALID NUMBER: ");
            break;
        }
    }
    return 0;
}