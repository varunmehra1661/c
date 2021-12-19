#include<stdio.h>
int main()
{
    int r,s,a;
    printf("Enter the age of Ram,Shyam,Ajay respectively=\n");
    scanf("%d%d%d",&r,&s,&a);
    if ((r<s) && (r<a))   { printf("\nRam is youngest");  }
    else if ((s<r) && (s<a))   { printf("\nShyam is youngest");  }
    else    { printf("\nAjay is youngest");  }
    return 0;
}