#include <stdio.h>
#include <string.h>
#include <conio.h>
void display();void display1();
struct student
{
    char name[20];
    int roll; 
    int marks[3];
    int course[3];
}S[5];
void display()
{
    printf("Fundamental programming (CO101) enter 1\n");
    printf("Mathematics (MA101) enter 2\n");
    printf("Applied Physics(AP101) enter 3\n");
    printf("Basic Electrical Engineering (BEE101) enter 4\n");
    printf("Fundamental Elective course (FEC101) enter 5\n");

}
void main()
{
    int i,j,avg,sum,big=0,flag;
    for(i=0;i<5;i++)
    {
        printf("Enter name: \n");fflush(stdin);
        gets(S[i].name);
        printf("Enter roll in digits only\n");
        scanf("%d",&S[i].roll);
        display();
        printf("Enter your course \n");
        for(int j=0;j<3;j++)
        {
            scanf("%d",&S[i].course[j]);
        }
        printf("Enter marks of all the subjects\n");
        for(int k=0;k<3;k++)
        {
            scanf("%d",&S[i].marks[k]);
        }       
    }
    display1();
    for(int l=0;l<5;l++)
    {
    for (int k=0;k<3;k++)
    {
        sum=sum+S[l].marks[k];
    }
    avg=sum/3;
    printf("Name:%s\n",S[l].name);
    printf("Roll: %d\n",S[l].roll);
    printf("Average Marks scored by ith student:%d\n",avg);  
    }    
    for(int m=0;m<5;m++)
    {
        for (int k=0;k<3;k++)
    {
        sum=sum+S[m].marks[k];
    }
        avg=sum/3;
        if(avg>big)
        {
            big=avg;flag=m;;
        }
    }
    printf("Higest average: Details:\n");
    printf("Name: %s\n",S[flag].name);
    printf("Roll: %d\n",S[flag].roll);
    printf("Average: %d\n",avg);
    
    
}
void display1()
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            int a=(S[i].course[j]=='1');
            if(a==0)
            {
               printf("%s\n", S[i].name);
            }
        }
    }
}