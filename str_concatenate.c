#include <stdio.h>
#include <string.h>

int main()
{
    char str1[1000], str2[1000];
    printf("Enter  string 1 : ");
    gets(str1);
    printf("Enter  string2 : ");
    gets(str2);
    strcat(str1, str2);
    printf("Strings after concatenation : %s\n", str1);
    return 0;
}