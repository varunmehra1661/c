#include<stdio.h>
int main()
{
    float a,b,c,tot;
    printf("Enter all 3 angles of Triangle=\n");
    scanf("%f%f%f",&a,&b,&c);
    tot=a+b+c;
    printf("\nThe angle sum=%f",tot);
    if(tot !=180)   { printf("\nNot a valid triangle!"); }
    else           { printf("\nValid triangle!"); }
    return 0;
    

}