#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("\nEnter a string : ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("New string is = %s", str);
    return 0;
}