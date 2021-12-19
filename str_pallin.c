#include <stdio.h>
#include <string.h>
int main()
{
    char A[50], B[50];
    int i, Length;
    printf("Enter any string : ");
    gets(A);
    Length = strlen(A);
    for (i = 0; i < Length; i++)
    {
        B[Length - i - 1] = A[i];
    }
    B[Length] = '\0';
    printf("Reversed : %s", B);
    if (strcmp(A, B) == 0)
        printf("\nPalindrome");
    else
        printf("\nNot a Palindrome");
    return 0;
}
