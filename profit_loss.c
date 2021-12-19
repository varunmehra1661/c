#include<stdio.h>
int main()
{
    float cp,sp,p,l;
    char ch;
    printf("Enter cost price=");
    scanf("%f",&cp);
    printf("\nEnter selling price=");
    scanf("%f",&sp);
    if(cp<sp)
              {
                  p=sp-cp;
                  printf("Profit=%f",p);
              }
    else
              {
                  l=cp-sp;
                  printf("Loss=%f",l);
              }
    return 0;
}