#include<stdio.h>
int main()
{
    int battery;
    printf("Enter battery Percentage : ");
    scanf("%d",&battery);
    if(battery<=20)
    {
        printf("low Battery.\n Please Charge your device.");
    }
    return 0;
}
