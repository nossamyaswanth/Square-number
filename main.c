#include <stdio.h>
#include <stdlib.h>

void square(int * x);

int main()
{
   int number;

   printf(" \n Please Enter any integer Value : ");
   scanf("%d", &number);

   square(&number);
   printf("The square of the given number is %d\n", number);

   return 0;
}

void square(int * x)
{
    *x = (*x) * (*x);
}
