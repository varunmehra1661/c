#include<stdio.h>
int main()
{
    int n,abs;
    printf("Enter the number=");
    scanf("%d",&n);
    if(n>0)   { abs=n; printf("\nAsolute value=%d",abs);}
    else      { abs=n*(-1);  printf("\n Absolute value=%d",abs);}
    return 0;
}