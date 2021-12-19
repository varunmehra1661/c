#include <stdio.h>
int main()
{
  int n, digit, temp, sum = 0;
  printf("Enter the any number=");
  scanf("%d", &n);
  temp = n;
  while (temp > 0)
  {
    digit = temp % 10;
    sum = sum + digit;
    temp = temp / 10;
  }
  printf("The sum of the digits=%d", sum);
  return 0;
}