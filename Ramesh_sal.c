#include<stdio.h>
int main()
{
    int sal,da=40,hr=20,tot,rem_sal;
    printf("Ramesh's salary=");
    scanf("%d",&sal);
    printf("\nDear allowance=%d",da);
    printf("\nHouse rent=%d",hr);
    tot=100-(da+hr);
    printf("\nTotal savings after spenditure=%d",tot);
    rem_sal=(tot*sal)/100;
    printf("\nRamesh's gross salary=%d",rem_sal);
    return 0;

}