#include <stdio.h>
void asssign(int *);
int main()
{
    int arr[10], i;
    int *a[10];
    printf("Enter 10 elements:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        a[i] = &arr[i];
    }
    printf("address of each element is:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", a[i]);
    }

    return 0;
}