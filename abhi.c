#include <stdio.h>
float add(int n1, int n2)
{
    return n1 + n2;
}
float sub(int n1, int n2)
{
    return n1 - n2;
}
float mul(int n1, int n2)
{
    return n1 * n2;
}
float divi(int n1, int n2)
{
    return n1 / n2;
}

int main()
{
    char op;
    int n1, n2;
    float res;

    printf("Enter Number 1 : ");
    scanf("%d", &n1);

    printf("Enter operator : ");
    scanf("%c", &op);

    printf("Enter Number 2 : ");
    scanf("%d", &n2);

    switch (op)
    {
    case '+':
        res = add(n1, n2);
        break;
    case '-':
        res = sub(n1, n2);
        break;
    case '*':
        res = mul(n1, n2);
        break;
    case '/':
        res = divi(n1, n2);
        break;
    default:
        printf("Invalid operator");
    }
    printf("%d %c %d = %.2f", n1, op, n2, res);
}