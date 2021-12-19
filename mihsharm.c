#include <stdio.h>

#include <string.h>

#include <process.h>

#include <stdlib.h>

struct contact

{

    long ph;

    char name[20], add[20], email[30];

} list;

char query[20], name[20];

FILE *fp, *ft;

int i, n, ch, l, found;

int main()

{

main:

    system("cls");

    system("color 06 ");

    printf("%d", sizeof(list)),

        printf("\n\t\t\t\t\t\t **** Welcome to Contact Management System *****");

    printf("\n\n\t\t\t\t\t\t\t\t\t  MAIN MENU\n\t\t\t\t\t\t\t\t____________\n\n");

    printf("\n=================================================================================================================================================================");

    printf("\n\n\t\t\t\t\t\t\t\t  (1) Add a new Contact");

    printf("\n\t\t\t\t\t\t\t\t  (2) List all Contacts");

    printf("\n\t\t\t\t\t\t\t\t  (3) Search for contact");

    printf("\n\t\t\t\t\t\t\t\t  (4) Edit a Contact");

    printf("\n\t\t\t\t\t\t\t\t  (5) Delete a Contact");

    printf("\n\t\t\t\t\t\t\t\t  (6) Delete all Contacts");

    printf("\n\t\t\t\t\t\t\t\t  (7) Exit");

    printf("\n\n=================================================================================================================================================================\n\n");

    printf("\t\t\t\t\t\t\t\t   Enter the choice: ");

    scanf("%d", &ch);

    switch (ch)

    {

        // To add contact

    case 1:

        system("cls");

        fp = fopen("contact.dll", "a");

        for (;;)

        {
            fflush(stdin);

            printf("\n\n\t____________________");

            printf("\n\n\n\tTo exit: Press blank space and enter in the name input\n\n\n\t\tName:          ");

            scanf("%[^\n]", &list.name);

            if (stricmp(list.name, "") == 0 || stricmp(list.name, " ") == 0)

                break;

            fflush(stdin);

            printf("\t\tPhone:         ");

            scanf("%ld", &list.ph);

            fflush(stdin);

            printf("\t\tAddress:       ");

            scanf("%[^\n]", &list.add);

            fflush(stdin);

            printf("\t\tEmail Id:      ");

            gets(list.email);

            printf("\n");

            fwrite(&list, sizeof(list), 1, fp);
        }

        fclose(fp);

        break;

        //To view the list of contact

    case 2:

        system("cls");

        printf("\n\t\t================================\n\t\t\tLIST OF CONTACTS\n\t\t================================\n\n");

        printf("              Here is the list of all saved contact\n");

        for (i = 97; i <= 122; i = i + 1)

        {

            fp = fopen("contact.dll", "r");

            fflush(stdin);

            found = 0;

            while (fread(&list, sizeof(list), 1, fp) == 1)

            {

                if (list.name[0] == i || list.name[0] == i - 32)

                {

                    printf("\n\tName\t: %s\n\tPhone\t: %ld\n\tAddress\t: %s\n\tEmail\t: %s\n", list.name, list.ph, list.add, list.email);

                    found++;
                }
            }

            if (found != 0)

            {

                printf("     ___________________\n");
            }

            fclose(fp);
        }

        break;

        //To search a contact

    case 3:

        system("cls");

        do

        {

            found = 0;

            printf("\n\n\t\tCONTACT SEARCH\n\t===========================\n\n\t  Name of contact to search: ");

            fflush(stdin);

            scanf("%[^\n]", &query);

            l = strlen(query);

            fp = fopen("contact.dll", "r");

            printf("\n\n\t\tSearch result for '%s' \n\t_______________\n", query);

            while (fread(&list, sizeof(list), 1, fp) == 1)

            {

                for (i = 0; i <= l; i++)

                    name[i] = list.name[i];

                name[l] = '\0';

                if (stricmp(name, query) == 0)

                {

                    printf("\n\t\tName\t: %s\n\t\tPhone\t: %ld\n\t\tAddress\t: %s\n\t\tEmail\t: %s\n", list.name, list.ph, list.add, list.email);

                    found++;
                }
            }

            if (found == 0)

                printf("\n\t\t::No match found!");

            else

                printf("\n\t\t::%d match(s) found!", found);

            fclose(fp);

            printf("\n\t\t::Try again?\n\n\t\t[1] Yes\t\t[0] No\n\n\t\t");

            scanf("%d", &ch);

        } while (ch == 1);

        break;

        // to edit a contact

    case 4:

        system("cls");

        fp = fopen("contact.dll", "r");

        ft = fopen("temp.dat", "w");

        fflush(stdin);

        printf("\t\tEdit contact\n\t===============================\n\n\t   Enter the name of contact to edit:");

        scanf("%[^\n]", name);

        while (fread(&list, sizeof(list), 1, fp) == 1)

        {

            if (stricmp(name, list.name) != 0)

                fwrite(&list, sizeof(list), 1, ft);
        }

        fflush(stdin);

        printf("\n\n\t\t::Editing '%s'\n\n", name);

        printf("\t\t\tName:\t\t");

        scanf("%[^\n]", &list.name);

        fflush(stdin);

        printf("\t\t\tPhone:\t\t");

        scanf("%ld", &list.ph);

        fflush(stdin);

        printf("\t\t\tAddress:\t");

        scanf("%[^\n]", &list.add);

        fflush(stdin);

        printf("\t\t\tEmail:\t\t");

        gets(list.email);

        printf("\n");

        fwrite(&list, sizeof(list), 1, ft);

        fclose(fp);

        fclose(ft);

        remove("contact.dll");

        rename("temp.dat", "contact.dll");

        break;

        //to delete a contact

    case 5:

        system("cls");

        fflush(stdin);

        printf("\n\n\t\tDELETE A CONTACT\n\t   ==========================\n\n\tEnter the name of contact to delete:");

        scanf("%[^\n]", &name);

        fp = fopen("contact.dll", "r");

        ft = fopen("temp.dat", "w");

        while (fread(&list, sizeof(list), 1, fp) != 0)

            if (stricmp(name, list.name) != 0)

                fwrite(&list, sizeof(list), 1, ft);

        fclose(fp);

        fclose(ft);

        remove("contact.dll");

        rename("temp.dat", "contact.dll");

        break;

        //To delete all contacts at once

    case 6:

        system("cls");

        fflush(stdin);

        printf("\n\t\t\t\t\t\t\t\t   All contacts deleted!");

        fp = fopen("contact.dll", "w");

        fclose(fp);

        break;

        //To exit

    case 7:

        printf("\n\t\t\t\t\t\t\t      Are you sure you want to exit?");

        break;

    default:

        printf("Invalid choice");

        break;
    }

    printf("\n\n\t\t\t\t\t\t\t      ~~Enter the Choice~~\n\n\t\t\t\t\t\t\t      [1] Main Menu\t   [0] Exit\n\n\t\t\t\t\t\t\t      ");

    scanf("%d", &ch);

    switch (ch)

    {

    case 1:

        goto main;

    case 0:

        break;

    default:

        printf("Invalid choice");

        break;
    }

    return 0;
}