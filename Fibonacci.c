#include <stdio.h>
int main()
{
  int i, n, term1 = 0, term2 = 1, ft;

  printf("Enter the number of terms\n");
  scanf("%d", &n);

  printf("First %d terms of Fibonacci series are:\n", n);

  for (i = 0; i < n; i++)
  {
    if (i <= 1)
    {
      ft = i;
    }
    else
    {
      ft = term1 + term2;
      term1 = term2;
      term2 = ft;
    }
    printf("%d\n", ft);
  }

  return 0;
}
