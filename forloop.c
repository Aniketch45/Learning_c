#include<stdio.h>
int main()
{
    /*for(int i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }*/

    //table print
  /*  for(int i=1;i<=10;i++)
    {
        printf("5*%d = %d \n",i,5*i);
    }*/

    //skipping Number
    int i=1,j=5;
    for(i,j;i<=5, j>0;i++, j--)
    {
        printf("i=%d j=%d\n",i,j);
    }
    return 0;
}
