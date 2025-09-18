#include<stdio.h>
int main()
{
    int num1,num2,num3;
    char op;

    printf("Enter first Number:");
    scanf("%d",&num1);

    printf("Enter second Number:");
    scanf("%d",&num2);

    printf("Which operation have to perform (+,-,*,/) :");
    scanf(" %c",&op);

    switch(op)
    {
        case'+':printf("Sum is %d",num1+num2);
            break;
            case'-':
            num3=num1-num2;
            printf("Subtraction is %d",num3);
            break;
            case'*':
            num3=num1*num2;
            printf("multiplication is %d",num3);
            break;
            case'/':
            num3=num1/num2;
            printf("division %d",num3);
            break;
            default:
                printf("Invalid input");
            return 0;
    }
    return 0;
}
