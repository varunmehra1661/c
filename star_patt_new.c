#include <stdio.h>

int main()
{
    int x, n, m = 1, sum = 1, i;
    printf("Enter number of terms and and power of e : ");
    scanf("%d %d", &x, &n);
    for (i = 1; i <= n; i++)
    {
        m = m * (x / i);
        sum = sum + m;
    }
    printf("Approximate value to the %d term : %d", n, sum);
    return 0;
}