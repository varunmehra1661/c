#include <stdio.h>
void main()
{
   int ar1[100], i, n, sum = 0, *p;
   printf(" Enter the number of elements  (max 100) : ");
   scanf("%d", &n);
   printf(" Enter %d number of elements in the array : \n", n);
   for (i = 0; i < n; i++)
   {
      printf(" element - %d : ", i + 1);
      scanf("%d", &ar1[i]);
   }
   p = ar1;
   for (i = 0; i < n; i++)
   {
      sum = sum + *p;
      p++;
   }
   printf(" The sum of array is : %d\n\n", sum);
}