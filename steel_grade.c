#include<stdio.h>
int main()
{
    float h,c,t;
    printf("Entered the Hardness of steel=");
    scanf("%f",&h);
    printf("\nEntered the carbon content of steel=");
    scanf("%f",&c);
    printf("\nEntered the Tensile strength of steel=");
    scanf("%f",&t);
    if (h > 50 && c < 0.7 && t > 5600)
    {
        printf("\nGrade is 10!!");
    }
    else if (h > 50 && c < 0.7 && t < 5600)
    {
        printf("\nGrade is 9!!");
    }
    else if (h < 50 && c < 0.7 && t > 5600)
    {
        printf("\nGrade is 8!!");
    }
    else if (h > 50 && c > 0.7 && t > 5600)
    {
        printf("\nGrade is 7!!");
    }
    else if (h > 50 || c < 0.7 || t > 5600)
    {
        printf("\nGrade is 6!!");
    }
    else
    {
        printf("\nGrade is 5!!");
    }
    
}