#include <stdio.h>
#include <math.h>
int main()
{
    long long n, bin = 0;
    int i = 0, j = 1, dec = 0, rem;
    char ch;
    printf("1. Binary to Decimal. \n 2. Decimal to Binary \n Choose(1/2) =");
    scanf("%c", &ch);
    if (ch == '1')
    {
        printf("Enter a binary number: ");
        scanf("%lld", &n);
        while (n != 0)
        {
            rem = n % 10;
            n /= 10;
            dec += rem * pow(2, i);
            ++i;
        }
        printf("Converted to Decimal = %d", dec);
    }
    else if (ch == '2')
    {
        printf("Enter a Decimal number= ");
        scanf("%lld", &n);
        while (n != 0)
        {
            rem = n % 2;

            n /= 2;
            bin += rem * j;
            j *= 10;
        }
         printf("Converted to Binary = %lld",bin);
    }
   

return 0;
}
