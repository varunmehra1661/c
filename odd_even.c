#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number=");
    scanf("%d",&num);
    if(num %2==0)  { printf("\nEVEN INTEGER");   }
    else         { printf("\nODD INTEGER");     }
    return 0;
    
}