#include<stdio.h>
int main()
{
    int age;
    printf("Enter your Age:");
    scanf("%d",&age);
    if(age<=5)
    {
        printf("No Ticket");
    }
    else if(age>5 && age<=60)
    {
        printf("Full Ticket");
    }
    else if(age>60 && age<75)
    {
        printf("Half Ticket");
    }
    else
    {
        printf("Free Ticket");
    }

    return 0;
}
