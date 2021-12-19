#include <stdio.h>
long factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
        return (num * factorial(num - 1));
}
int main()
{
    int num;
    printf("Enter the number = ");
    scanf("%d", &num);
    printf("Factorial of the number %d! is = %ld", num, factorial(num));
    return 0;
}