#include<stdio.h>
int main()
{
    int oq,sq=100;
    char cr;
    printf("Enter the quantity to be ordered= ");
    scanf("%d",&oq);
    printf("\nEnter your credit(O/N)=");
    scanf("%c",&cr);
    if (oq <= sq && cr=='O')
    {
        printf("Order is supplied!!");
    }
    else if (cr=='N')
    {
        printf("Credit not appropriate \nOrder will not be supplied");
    }
    else if (oq > sq && cr=='O')
    {
        printf(" 100 Orders supplied and rest will be supplied soon ");
    }
    return 0;
    
    
    

}