#include<stdio.h>
int main()
{
    int d;
    printf("Enter the number of days of late submission=");
    scanf("%d",&d);
    if (d >= 1 && d <= 5)
    {
        printf("\nFine=0.5 rs!!");
    }
    else if (d >= 6 && d <= 10)
    {
        printf("\nFine=1 rs!!");
    }
    else if (d >= 10 && d <= 30)
    {
        printf("\nFine=5 rs!!");

    }
    else if (d > 30)
    {
        printf("\nMembership is cancelled!!!!");
    }
    return 0;
    
    
    
    
}