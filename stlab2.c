#include <stdio.h>
struct user
{
    int ph[10];
    char name[50];
    int amt;
    char kyc;
};
void func(struct user u);
void addm(struct user u, int amnt);
void paym(struct user u, int amnt);

int main(void)
{
    struct user u[5];
    int amnt, i = 0;
    char a;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter details of user ::: %d\n", i);
        printf("Enter the mobile number = ");
        scanf("%d", &u[i].ph);
        printf("Enter the name = ");
        scanf("%s", &u[i].name);
        printf("Enter the amount in paytm wallet = ");
        scanf("%d", &u[i].amt);
        printf("KYC verified or not (yes/no) = ");
        scanf("%s", &u[i].kyc);
    }
    func(u[i]);
    while (i < 5)
    {

        printf("choose an option: \n a. Add Money \n b. Pay Money");
        scanf("%c", &a);
        if (a == 'a')
        {
            printf("Enter Amount to be added: ");
            scanf("%d", &amnt);
            addm(u[i], amnt);
        }
        else if (a == 'b')
        {
            printf("Enter Amount to be Payed: ");
            scanf("%d", &amnt);
            paym(u[i], amnt);
        }
        else
            printf("Enter Valid Option.");
        i++;
    }
}
void func(struct user u)
{
    if (u.amt < 1000)
    {
        printf("User Details (amount < 1000): \n");
        printf(u.name);
        printf(u.ph);
        printf(u.amt);
        printf(u.kyc);
    }
}
void addm(struct user u, int amnt)
{
    u.amt += amnt;
}
void paym(struct user u, int amnt)
{
    if (u.amt > amnt)
    {
        u.amt -= amnt;
    }
    else
        printf("Insufficient Balance");
}