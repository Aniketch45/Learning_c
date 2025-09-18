#include<stdio.h>
int main()
{
    int num1,num2,ch;
    char c;
    do{
                printf("1. Addition\n");
                printf("2. Subtraction \n");
                printf("3. Division \n");
                printf("4.Multiplication \n");

            printf("Enter your choice:");
            scanf(" %d",&ch);

            switch(ch)
                   {
                        case 1:
                             printf("Enter 1st num : ");
                             scanf("%d",&num1);

                            printf("\n Enter 2nd num :" );
                             scanf("%d",&num2);

                             num1+=num2;
                             printf("\nAddition is: %d",num1);
                            break;
                        case 2:
                             printf("Enter 1st num : ");
                             scanf("%d",&num1);

                            printf("\nEnter 2nd num : ");
                             scanf("%d",&num2);

                             num1-=num2;
                             printf("\nSubtraction is: %d",num1);
                            break;
                         case 3:
                            printf("Enter 1st num : ");
                             scanf("%d",&num1);

                            printf("\nEnter 2nd num  :");
                             scanf("%d",&num2);

                             num1/=num2;
                             printf("\nDivision is: %d",num1);
                            break;
                         case 4:
                            printf("Enter 1st num : ");
                             scanf("%d",&num1);

                            printf("\nEnter 2nd num : ");
                             scanf("%d",&num2);

                             num1*=num2;
                             printf("\nmultiplication is: %d",num1);
                             break;

                         default:
                            printf("invalid choice");
                   }
                    if(ch!=0)
                    {
                            printf("\nDo you want to continue (y/n)");
                            scanf(" %c",&c);
                    }
                    else
                    {
                            c='n';
                    }
        }while(c=='y' || c=='Y');
    return 0;
}
