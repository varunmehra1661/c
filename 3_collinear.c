#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3;
    printf("Enter the values of (x1,y1)=");
    scanf("%f%f",&x1,&y1);
    printf("\nEnter the values of (x2,y2)=");
    scanf("%f%f",&x2,&y2);
    printf("\nEnter the values of (x3,y3)=");
    scanf("%f%f",&x3,&y3);
    if( x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2) ==0)
    {
        printf("\nThe three points are collinear!!");
    }
    else
    {
        printf("\nPoints are not collinear!!");
    }
    return 0;
    
}