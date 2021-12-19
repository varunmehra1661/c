#include<stdio.h>
int main()
{
    char ch;
    printf("Enter anything=");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')   { printf("\nCapital letter alphabet!!"); }
    else if (ch>='a' && ch<='b')        
    {
        printf("\nSmall letter alphabet!!");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("\nNumbers entered!!");
    }
    else
    {
        printf("\nSpecial symbols entered!!");
    }
    return 0;
    
    
}