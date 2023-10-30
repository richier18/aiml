#include<stdio.h>

void main()
{
    factorial();

}




    void factorial()
    {
        int n,f=1;
    printf("\nEnter the no.");
    scanf("%d",&n);

       for(int i=1;i<=n;i++)
       {
           f=f*i;
       }
            printf("the factorial = %d",f);
    }
