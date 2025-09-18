#include<stdio.h>
int main()
{
    int ticket, idproof, luggage;

    printf("Dou you have a Ticket? (1= yes / 0=No) ");
    scanf("%d",&ticket);
    if(ticket==1)
    {
        printf("Do You have Id Proof?  (1= yes / 0=No) ");
         scanf("%d",&idproof);
        if(idproof==1)
        {
            printf("Do you have Luggage? (1= yes / 0=No )");
            scanf("%d",&luggage);
            if(luggage==1)
            {
                printf("Check in Succesfully.");
            }
            else
            {
                printf("Extra Luggage Charges apply");
             }
        }
        else
        {
            printf("id Proof Required.");
        }
    }
    else
    {
        printf("No ticket No Entry.");
    }

    return 0;
}

