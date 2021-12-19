#include <stdio.h>
int main()
{
    int a = 0, n = 0;
    int rows = 0;
    printf("Enter the number of rows = ");
    scanf("%d", &rows);
    for (a = 1; a <= rows; ++a)
    {

        for (n = 1; n < a; ++n)
        {
            printf(" ");
        }
        for (n = a; n <= rows; ++n)
        {
            if ((a == 1) || (n == a) || (n == rows))
            {

                printf("*");
            }
            else
            {

                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}