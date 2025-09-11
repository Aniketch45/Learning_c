#include<stdio.h>
int main()
{
    int apple,oil,milk,applePrice=100,oilPrice=150,milkPrice=50;
    int total,paid,remain;

    printf("Enter apple qty:");
    scanf("%d",&apple);

     printf("\nEnter oil qty:");
    scanf("%d",&oil);

     printf("\nEnter milk qty:");
    scanf("%d",&milk);

    total=(apple*applePrice)+(oil*oilPrice)+(milk*milkPrice);
     printf("\nTotal amount is %d",total);

     printf("\nEnter amount paid by customer:");
     scanf("%d",&paid);

     remain=paid-total;
     printf("Total Exchange is: %d",remain);

     return 0;
}
