#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your Marks :");
    scanf("%d",&marks);
    if(marks>35)
    {
        printf("Congratulations, You Passed.");
    }
    else
    {
        printf("Oh, no you Failed.");
    }
}
