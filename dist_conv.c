#include<stdio.h>
int main()
{
    float d,m,ft,in,cm;
    printf("Distance between the two cities(k.m.)=");
    scanf("%f",&d);
    m=d*1000;
    ft=3280*d;
    in=39370*d;
    cm=1000*100*d;
    printf("\nDistance in meters=%f",m);
    printf("\nDistance in feet=%f",ft);
    printf("\nDistance in inches=%f",in);
    printf("\nDistance in centimeters=%f",cm);
    return 0;
}