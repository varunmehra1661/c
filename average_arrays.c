#include <stdio.h>
int main()
{
    int n, i;
    float arr[100], sum = 0, avg;
    printf("Enter the numbers of elements= ");
    scanf("%d", &n);
    while (n > 100 || n < 1)
    {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }
    for (i = 0; i < n; ++i)
    {
        printf(" Enter number %d = ", i + 1);
        scanf("%f", &arr[i]);
        sum = sum + arr[i];
    }
    avg = sum / n;
    printf("Average = %f", avg);
    return 0;
}