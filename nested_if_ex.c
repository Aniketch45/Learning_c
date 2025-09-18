#include<stdio.h>
int main()
{
    int open,ready,payment;

    printf("Restaurant is open? (yes=1/ no=0)");
    scanf("%d",&open);
    if(open==1)
    {
        printf("Food is ready. (yes=1/ no=0)");
        scanf("%d",&ready);
        if(ready==1)
        {
            printf("Payment done. (yes=1/ no=0)");
            scanf("%d",&payment);
            if(payment==1)
            {
                printf("you can Exit.");
            }
            else
            {
                printf("Please make payment");
            }
        }
        else
        {
            printf("wait for half hour.");
        }
    }
    else
    {
        printf("Restaurant is close.");
    }

    return 0;
}
