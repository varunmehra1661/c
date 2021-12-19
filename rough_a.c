#include <stdio.h>
int main()
{
    int num, b, l, j;
    char c, d, e, f, g, h, feedback;
    int det;  // for order Details//
    char ord; // for order Details//
    printf("\n Welcome to Adyaa's Restraunt :)");
    printf("\n Press 1 to order food");
    printf("\n Press 2 to give feedback");
    printf("\n Press 3 to exit");
    printf("\n Enter your choice: "); // num is for starting switch//
    scanf(" %d", &num);

    switch (num)
    {
    case 1:
        printf("\n What would you like to have?");
        printf("\n Press a for Veg. Food");
        printf("\n Press b for Non-Veg. Food");
        printf("\n Enter your choice: "); // c is for veg, Non-Veg//
        scanf(" %c", &c);

        switch (c)
        {
        case 'a':
            printf("\n You chose Veg. Food!");
            printf("\n Press i for Pizza");
            printf("\n Press ii for Pasta");
            printf("\n Enter your choice: ");
            scanf(" %c", &d); // d is for Veg choice//

            switch (d)
                
            {
            case 'i':
                printf("\n You chose Pizza!");
                printf("\n Press a for Thin crust");
                printf("\n Press b for Pan Pizza Normal");
                printf("\n Enter your choice: ");
                scanf(" %c", &e); // e is for veg Pizza category//
                printf("\n THANK YOU FOR ORDERING :)");
                break;

            case 'ii':
                printf("\n You chose Pasta!");
                printf("\n Press 1 for Red Sauce");
                printf("\n Press 2 for White Sauce");
                printf("\n Press 3 for Mix");
                printf("\n Enter your choice: ");
                scanf("%d", &b); // b is for veg pasta category//
                printf("\n THANK YOU FOR ORDERING :)");
                break;
            }
            break;

        case 'b':
            printf("\n You chose Non-Veg. Food!");
            printf("\n Press iii for Pizza");
            printf("\n Press iv for Pasta");
            printf("\n Enter your choice: ");
            scanf(" %c", &f); // f is for Non-Veg choice//

            switch (f)
                
            {
            case 'iii':
                printf("\n You chose Pizza!");
                printf("\n Press a for Thin crust");
                printf("\n Press b for Pan Pizza Normal");

                printf("\n Enter your choice: "); // g is for Non-Veg Pizza category//
                scanf(" %c", &g);

                printf("\n THANK YOU FOR ORDERING :)");
                break;

            case 'iv':
                printf("\n You chose Pasta!");
                printf("\n Press 4 for Red Sauce");
                printf("\n Press 5 for White Sauce");
                printf("\n Press 6 for Mix");
                printf("\n Enter your choice: "); // l is for Non-Veg Pasta category//
                scanf("%d", &l);
                printf("\n THANK YOU FOR ORDERING :)");
                break;
            }
            break;
        }

    case 2:
        printf("\n Press a to Rate The Order");
        printf("\n Press b for Summary Of Order");
        printf("\n Press c for Customer Care Details");
        printf("\n Enter your choice: ");
        scanf(" %c", &h);

        switch (h)
        {
        case 'a':
            printf("\n Enter the feedback here: ");
            scanf(" %c", &feedback);
            printf("\n Thanks For your valuable time :)");
            break;

        case 'b':
            printf("\n Summary of your order is as follows:-");
            if (ord = 'e')
            {
                printf("\n You ordered %c.", e);
                printf("\n Total Payble amount is: INR 700");
            }
            else if (det = 'b')
            {
                printf("\n You ordered %d.", b);
                printf("\n Total Payble amount is: INR 500");
            }
            else if (ord = 'g')
            {
                printf("\n You ordered %c.", g);
                printf("\n Total Payble amount is: INR 1100");
            }
            else if (det = 'l')
                ;
            {
                printf("\n You ordered %d.", l);
                printf("\n Total Payble amount is: INR 900");
            }
            break;

        case 'c':
            printf("\t\tCONTACT US VIA:-");
            printf("\n Customer care number: 1100002233");
            printf("\n Customer care email-id: adyaasrest@gmail.com");
            printf("\n Thank You for Visiting Us :)");
            break;
        }
    case 3:
        printf("\n Your Session Has been Terminated");
        printf("\n Hope to see you soon :)");
        break;
    }
    return 0;
}