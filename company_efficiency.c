#include<stdio.h>
int main()
{
    float h;
    printf("Enter hours in which work is completed(in hrs)=");
    scanf("%f",&h);
    if (h >= 2 && h <= 3)
    {
        printf("\nHighly efficient!!");
    }
    else if (h >= 3 && h <= 4)
    {
        printf("\nImprove speed!!");
    }
    else if (h >= 4 && h <= 5)
    {
        printf("\nAssigned to training to improve speed!!");
    }
    else if (h > 5)
    {
        printf("Leave the Company!!!");
    }
    return 0;
    
}