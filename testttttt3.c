#include <stdio.h>
#include <string.h>

// declaring structure
struct struct_example
{
    int age;
    float salary;
    char name[20];
};

// declaraing union

union union_example
{
    int age;
    float salary;
    char name[20];
};

void main()
{
    int n;
    printf("Enter the number of emp for details");
    scanf("%d", &n);

    struct struct_example s = {18, 38, "geeksforgeeks"};
    union union_example u = {18, 38, "geeksforgeeks"};
    for (int i = 0; i < n; i++)
    {
        printf("Emp number ::: %d", i + 1);
        printf("Name = ");
        scanf("%s", &s.name[i]);
        printf("\nAge = ");
        scanf("%d", &s.age[i]);
        printf("\nSalary = ");
        scanf("%f", &s.salary[i]);
    }

    printf("structure data:\n age: %d\n"
           "salary: %.2f\n name: %s\n",
           s.age, s.salary, s.name);
    printf("\nunion data:\n iage: %d\n"
           "salary: %.2f\n name: %s\n",
           u.age, u.salary, u.name);
    printf("\nsizeof structure : %d\n", sizeof(s));
    printf("sizeof union : %d\n", sizeof(u));
    printf("\n Accessing all members at a time:");
    s.age = 183;
    s.salary = 90;
    strcpy(s.name, "geeksforgeeks");

    printf("structure data:\n age: %d\n "
           "salary: %.2f\n name: %s\n",
           s.age, s.salary, s.name);
    u.age = 183;
    u.salary = 90;
    strcpy(u.name, "geeksforgeeks");
    printf("\nunion data:\n age: %d\n "
           "decimal: %.2f\n name: %s\n",
           u.age, u.salary, u.name);
    printf("\n Accessing one member at time:");
    printf("\nstructure data:");
    s.age = 240;
    printf("\ninteger: %d", s.age);
    s.salary = 120;
    printf("\nsalary: %f", s.salary);
    strcpy(s.name, "C programming");
    printf("\nname: %s\n", s.name);
    printf("\n union data:");
    u.age = 240;
    printf("\age: %d", u.age);
    u.salary = 120;
    printf("\ndecimal: %f", u.salary);
    strcpy(u.name, "C programming");
    printf("\nname: %s\n", u.name);
    printf("\nAltering a member value:\n");
    s.age = 1218;
    printf("structure data:\n age: %d\n "
           " salary: %.2f\n name: %s\n",
           s.age, s.salary, s.name);
    u.age = 1218;
    printf("union data:\n integer: %d\n"
           "salary: %.2f\n name: %s\n",
           u.age, u.salary, u.name);
}
