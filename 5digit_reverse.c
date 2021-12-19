#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter the number to be reversed=");
    scanf("%d",&n);
    while(n!=0)
         {
             rev=rev*10;
             rev=rev+(n%10);
             n=n/10;
         }
    printf("\nThe reverse of the number =%d",rev);
    return 0;     
}