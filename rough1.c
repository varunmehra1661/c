#include <stdio.h>
#include <string.h>

int main()
{
    char A[50], B[50];
    printf("Enter 1st string : ");
    gets(A);
    printf("Enter 2nd string : ");
    gets(B);
    int A_Length, B_Length, Flag = 0, i;
    A_Length = strlen(A);
    B_Length = strlen(B);
    printf("Length of the string 1 and 2 respectively : %d, %d", A_Length, B_Length);
    if (A_Length == B_Length)
        for (i = 0; i < A_Length; i++)
        {
            if (A[i] != B[i])
                Flag = 1;
        }
    else if (A_Length == B_Length)
        Flag = 0;
    else
        Flag = 1;
    if (A_Length == B_Length)
    {
        printf("\nString lengths are equal\n");
    }
    else
    {
        printf("\nString lengths not equal\n");
    }
    for (i = 0; i < A_Length; i++)
    {
        A[A_Length + i] = B[i];
    }
    printf("\nNew concatenate string = %s", A);
    return 0;
}