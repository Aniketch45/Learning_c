#include<stdio.h>
int main()
{
   int amount;
    printf("Enter shopping amount :");
    scanf("%d",&amount);
     /* if(amount<=balance)
    {
        printf("Enter amount to withdraw\n");
        balance-=amount;
        printf("remain Balance is %d",balance);
    }*/
    if(amount>2300)
    {
        printf("Congrats you get free Delivery.");
    }
    else
    {
        printf("Dilvery Charges will apply.");
    }
    return 0;
}


