#include <stdio.h>

int main()
{
   int n;
   printf("Enter an integer\n");
   scanf("%d",&n);
   if ((n | 1) > n)
   {
      printf("Even\n");
   }
   else
   {
      printf("Odd\n");
   }
   return 0;
}