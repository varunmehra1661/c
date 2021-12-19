#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of Elements : ");
    scanf("%d", &n);
    int A[n];
    printf("\nEnter %d Elements : A ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    int temp = A[0];
    for (int i = 0; i < n; i++)
    {
        A[i] = A[i + 1];
        A[n] = temp;
    }
    printf("\nLeft Rotated Array :");
    for (int i = 0; i < n; i++)
        printf(" %d", A[i]);
    return 0;
}
