#include<stdio.h>
int main()
{
    /*int battery = 100;

    while(battery>0)
    {
        printf("Battery : %d \n",battery);
        battery-=10;
    }
    printf("Switched off");*/

     int num=1;
    while(num<=100)
    {
        if(num%2==0)
        {
            printf("%d\n",num);
        }
        num++;
    }
    return 0;
}
