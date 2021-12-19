#include <stdio.h>
int main()
{
    int n, i, a[10], temp;
    printf("Number of elements you want to enter =");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the element : [%d] :::", i + 1);
        scanf("%d", &a[i]);
    }
    temp = a[0];
    for (i = 1; i < n-1 ; i++)
    {
        a[i]=a[i+1];
        a[n-1] = temp;
        printf("The new array is :::%d", a[i]);
    }

    return 0;
}