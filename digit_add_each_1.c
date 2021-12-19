#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    printf("Enter the number=");
    scanf("%d",&num);
    while (num)
    {
        rem=num%10;
        sum=sum+(rem+1);
        num=num/10;
    }
    printf("\nThe new number after adding 1 to each digit =%d",sum);
    return 0;
    
}