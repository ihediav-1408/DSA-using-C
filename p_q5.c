#include<stdio.h>
#include <conio.h> 

int main()
{
  int n, a = 0, b = 1, result, i;
  printf("Please give an input upto you want to print series : ");
  scanf("%d", &n);
  printf("Fibonacci Series is:\n");
  for (i = 0; i < n; i++)
  {
    if (i <= 1)
      result = i;
    else
    {
      result = a +b;
      a = b;
      b = result;
    }
    printf("%d\t", result);
  } 
  return 0;
} 