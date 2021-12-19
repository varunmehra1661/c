#include<stdio.h>
int main()
{
    float l,r,b,perr,arr,arc,circ;
    printf("RECTANGLE\n");
    printf("Enter length & breadth=\n");
    scanf("%f%f",&l,&b);
    perr=2*(l+b);
    arr=l*b;
    printf("\nPerimeter=%f",l);
    printf("\nArea=%f",arr);
    printf("\n\n\n\n\nCIRCLE");
    printf("\nEnter the radius=");
    scanf("%f",&r);
    circ=2*3.14*r;
    arc=3.14*r*r;
    printf("\nCircumference=%f",circ);
    printf("\nArea=%f",arc);
    return 0;

}