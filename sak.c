#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library
{
    char bk_name[30];
    char author[30];
    int pages;
    float price;
};

int main()
{
    struct library l[100];
    char ar_nm[30], bk_nm[30];
    int i, j, keepcount;
    i = j = keepcount = 0;

    while (j != 8)
    {
        printf("\n\n1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. Issue a book\n");
        printf("7. Show the record of all the books present\n");
        printf("8. Exit");

        printf("\n\nEnter one of the above : ");
        scanf("%d", &j);

        switch (j)
        {
        /* Add book */
        case 1:

            printf("Enter book name = ");
            scanf("%s", l[i].bk_name);

            printf("Enter author name = ");
            scanf("%s", l[i].author);

            printf("Enter pages = ");
            scanf("%d", &l[i].pages);

            printf("Enter price = ");
            scanf("%f", &l[i].price);
            keepcount++;
            break;

        case 2:

            printf("\nRecords in the library are\n");
            for (i = 0; i < keepcount; i++)
            {
                printf("\n\tBook number =%d", i + 1);
                printf("\n\tbook name = %s", l[i].bk_name);

                printf("\n\tauthor name = %s", l[i].author);

                printf("\n\tpages = %d", l[i].pages);

                printf("\n\tprice = %f", l[i].price);
                printf(" ");
            }
            continue;

        case 3:

            printf("Enter author name : ");
            scanf("%s", ar_nm);
            for (i = 0; i < keepcount; i++)
            {
                if (strcmp(ar_nm, l[i].author) == 0)
                {
                    printf("\n\tBook number =%d", i + 1);
                    printf("\n\tbook name = %s", l[i].bk_name);

                    printf("\n\tauthor name = %s", l[i].author);

                    printf("\n\tpages = %d", l[i].pages);

                    printf("\n\tprice = %f", l[i].price);
                }
            }
            continue;
        case 4:

            printf("Enter book name : ");
            scanf("%s", bk_nm);
            for (i = 0; i < keepcount; i++)
            {
                if (strcmp(bk_nm, l[i].bk_name) == 0)
                    printf("%s \t %s \t %d \t %f", l[i].bk_name, l[i].author, l[i].pages, l[i].price);
            }
            continue;
        case 5:

            printf("\n No of books in library : %d", keepcount);
            continue;

        case 6:

            printf("Enter book name : ");
            scanf("%s", bk_nm);
            for (i = 0; i < keepcount; i++)
            {
                if (strcmp(bk_nm, l[i].bk_name) == 0)
                    printf("%s %s %d %f", l[i].bk_name, l[i].author, l[i].pages, l[i].price);
                printf("\nThis book has been issued to you for 7 days");
            }
            continue;

        case 7:

            printf("\n No. of books in library : %d", keepcount);

            printf("\n list of the %d books present :", keepcount);

            for (int i = 0; i < keepcount; i++)
            {
                printf("\nBook %d -->", i + 1);

                printf("\nbook name = %s", l[i].bk_name);

                printf("\n\t  author name = %s", l[i].author);

                printf("\n\t  pages = %d", l[i].pages);

                printf("\n\t  price = %f", l[i].price);

                printf("\n_______");
            }
            continue;

        case 8:

            exit(0);
        }
    }
    return 0;
}