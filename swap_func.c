#include <stdio.h>
void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main()
{
    int n1, n2;
    printf("Value of num1 = ");
    scanf("%d", &n1);
    printf("Value of num2 = ");
    scanf("%d", &n2);
    printf("After swapping :- ");
    swap(&n1, &n2);
    printf("\nValue of num1 = %d \n", n1);
    printf("Value of num2 = %d \n", n2);
    return 0;
}