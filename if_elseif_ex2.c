#include<stdio.h>
int main()
{
    int temp;
    printf("Enter Temperature : ");
    scanf("%d",&temp);

    if(temp>=20 && temp<=30)
    {
        printf("Moderate Temperature.");
    }
    else if(temp>30 && temp<=40)
    {
        printf("Hot Temperature.");
    }
    else if(temp>40 && temp<=55)
    {
        printf("Very hot Temperature.");
    }
    else if(temp>=10 && temp<20)
    {
        printf("cold Temperature,");
    }
    else if(temp>0)
    {
        printf("Very Cold Temperature.");
    }
    else
    {
        printf("Freezing");
    }
    return 0;
}
