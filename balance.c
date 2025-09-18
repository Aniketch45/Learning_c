#include<stdio.h>
int main()
{
    int ch,balance=2000,deposit,amount;
    char c;

    do{
                printf("-------ATM MENU-------\n");
                printf("1. Check Balance \n");
                printf("2. Deposite amount \n");
                printf("3. Withdraw Money \n");
                printf("0.Exit \n");

                printf("Enter your Choice :");
                scanf("%d",&ch);

                switch(ch)
                {
                    case 1: printf("your Balance is %d",balance);
                            break;
                    case 2: printf("Enter Amount to Deposite:");
                                  scanf("%d",&amount);

                                  balance=balance+amount;
                                  printf("Amount Deposited %d",amount);
                                  printf(" \nDeposited Successfully, new balance is= %d",balance);
                        break;
                    case 3: printf("Enter amount to withdraw:");
                                    scanf("%d",&amount);

                                    if(amount<=balance)
                                    {
                                        balance-=amount;
                                    }
                                    else
                                    {
                                        printf("insufficient Balance\n");
                                    }
                                    printf("Withdraw Successfully, new balance is= %d\n",balance);
                        break;
                    case 0:
                            printf("Exiting ATM");
                        break;
                    default:
                        printf("invalid Choice");
                }
                     if(ch!=0)
                    {
                            printf("\n Do you want to continue (y/n)");
                            scanf(" %c",&c);
                    }
                    else
                    {
                            c='n';
                    }
        }while(c=='y' || c=='Y');

    return 0;
}
