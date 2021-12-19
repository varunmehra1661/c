#include<stdio.h>
int main()
{
    float a,b,c,bc;
    printf("Enter all the sides of the triangle=\n");
    scanf("%f%f%f",&a,&b,&c);
    if (a > b && a > c)
    {
        
        if (b+c > a)
        {
            printf("\nValid triangle!!");

        }
        else
        {
            printf("\nNot a valid triangle!!");
        }
    }
    else if (b > a && b > c)
    {
        
        if (a+c > b)
        {
            printf("\nValid triangle!!");

        }
        else
        {
            printf("\nNot a valid triangle!!");
        }
    }
    else if (c > b && c > a)
    {
        
        if (a+b > c)
        {
            printf("\nValid triangle!!");

        }
        else
        {
            printf("\nNot a valid triangle!!");
        }
    }
    return 0;
    
}