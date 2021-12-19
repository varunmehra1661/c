#include<stdio.h>
int main()
{
    int C,D,temp;
    printf("Enter C=");
    scanf("%d",&C);
    printf("\nEnter D=");
    scanf("%d",&D);
    temp=C;
    C=D;
    D=temp;
    printf("\nValues after swapping=\n%d\n%d",C,D);
    return 0;


}