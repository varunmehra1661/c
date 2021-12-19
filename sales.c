#include <stdio.h>
int main()
{
    int sales, com;
    printf("Enter sales=");
    scanf("%d", &sales);
    {
        if (sales < 5000)
        {
            com = 0.05 * sales;
            printf("Com is %d", com);
        }
        else if (5000 < sales < 7500)
        {
            com = 0.1 * sales + 100;
            if (650 < com < 800)
                printf("Com is %d", com);
            else
                printf("Not elig\n");
        }
        else if (sales > 10000)
        {
            com = 0.15 * sales;
            printf("Com is %d", com);
        }
        return 0;
    }
}