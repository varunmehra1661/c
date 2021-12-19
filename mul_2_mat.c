#include <stdio.h>
int main()
{
    int matA[3][3], matB[3][3], matC[3][3];
    int r, c, k;
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("Enter first matrix : element[%d][%d] :", r + 1, c + 1);
            scanf("%d", &matA[r][c]);
        }
    }
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("Enter second matrix : element[%d][%d] :", r + 1, c + 1);
            scanf("%d", &matB[r][c]);
        }
    }
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            matC[r][c] = 0;
            for (k = 0; k < 3; k++)
                matC[r][c] += matA[r][k] * matB[k][c];
        }
    }
    printf("\n New multiplied matrix : \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
            printf(" %d", matC[r][c]);
        printf("\n");
    }

    return 0;
}