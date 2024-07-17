// Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively

#include <stdio.h>

int main()
{

   int a[3][10];
   int b[3] = {2, 7, 9};

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 10; j++)
      {

         a[i][j] = b[i] * (j + 1);
      }
   }

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 10; j++)
      {

         printf("%dX%d=%d\n", b[i], j + 1, a[i][j]);
      }
      printf("\n");
   }
   return 0;
}