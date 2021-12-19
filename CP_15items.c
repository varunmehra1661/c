#include<stdio.h>
int main()
{
    float tsp,tpe,cp,it=15;
    printf("Enter the total selling price of 15 items=");
    scanf("%f",&tsp);
    printf("\nEnter the total profit earned from 15 items=");
    scanf("%f",&tpe);
    cp=(tsp-tpe)/15;
    printf("\nToatal cost price for 1 item =%f",cp);
    return 0;

}