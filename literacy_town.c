#include<stdio.h>
int main()
{
    float m=52,w,lit=48,lit_m=35,lit_w,pop=80000,ill_m,ill_w;
    ill_m=(100-lit_m)*(pop/100);
    lit_w=(lit-lit_m)*(pop/100);
    ill_w=pop-lit_w;
    printf("\nNumber of illiterate men=%f",ill_m);
    printf("\nNumber of illiterate women=%f",ill_w);
    return 0;


}