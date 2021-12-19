#include<stdio.h>
int main()
{
    float p,c,m,b,e,tot,perc;
    printf("Enter the marks in Physics=");
    scanf("%f",&p);
    printf("\nEnter the marks in Chemistry=");
    scanf("%f",&c);
    printf("\nEnter the marks in Maths=");
    scanf("%f",&m);
    printf("\nEnter the marks in Biology=");
    scanf("%f",&b);
    printf("\nEnter the marks in English=");
    scanf("%f",&e);
    tot=p+c+m+b+e;
    perc=tot/5;
    printf("\nTotal aggregated marks=%f",tot);
    printf("\nPercentage scored=%f",perc);
    return 0;
}