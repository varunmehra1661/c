#include <stdio.h>
int main()
{
    int n, rem, sum = 0, temp;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;

    while (n != 0)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        n /= 10;
    }

    if (temp == sum)
    {
        printf("%d is a palindrome!!", temp);
    }

    else
    {
        printf("%d is not a palindrome!!", temp);
    }

    return 0;
}