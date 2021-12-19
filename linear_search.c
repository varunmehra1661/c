#include <stdio.h>
int main()
{
    int ar[100], ls, i, n;

    printf("Enter number of elements in array =");
    scanf("%d", &n);
    printf("Enter %d integer(s)\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    printf("Enter a number to search\n");
    scanf("%d", &ls);
    for (i = 0; i < n; i++)
    {
        if (ar[i] == ls)
        {
            printf("%d is present at location %d.\n", ls, i + 1);
            break;
        }
    }
    if (i == n)
        printf("%d isn't present in the array.\n", ls);

    return 0;
}