#include<stdio.h>
int main()
{
    int y;
    printf("Enter the year=");
    scanf("%d",&y);
    if((y % 400==0) ||(y % 4==0) )   { printf("Leap year!"); }
    else                             { printf("Not a leap year!"); }
    return 0;
    

}