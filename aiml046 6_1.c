#include <stdio.h>
#include <math.h>
void main()
{
    //Prepared by 23AIML046 Aditya Patel
    int choice, n, i = 1, c = 0, flag = 1, temp, sum = 0, r, ag;
    do
    {
        printf("\nPress\n1 for Prime or Not\n2 for Armstrong or not\n3 for Perfect Number or not\n4 for Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the Number : ");
            scanf("%d", &n);
            for (i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                printf("\n%d is a Prime number ", n);
            }
            else
            {
                printf("\n%d is not a Prime number ", n);
            }
            break;
        case 2:
            printf("\nEnter the Number : ");
            scanf("%d", &n);
            temp = n;
            while (temp != 0)
            {
                c++;
                temp = temp / 10;
            }
            temp = n;
            while (temp != 0)
            {
                r = temp % 10;
                sum = sum + pow(r, c);
                temp = temp / 10;
            }
            printf("%d",sum);
            if (sum == n)
            {
                printf("\n%d is an Armstrong Number", n);
            }
            else
            {
                printf("\n%d is not an Armstrong Number", n);
            }
            break;
        case 3:
            printf("\nEnter the Number : ");
            scanf("%d", &n);
            do
            {
                if (n % i == 0)
                {
                    sum = sum + i;
                }
                i++;
            } while (i < n);
            if (sum == n)
            {
                printf("\n%d is Perfect Number", n);
            }
            else
            {
                printf("\n%d is not Perfect Number", n);
            }
            break;
        case 4:
            break;
        }
        printf("\nPress 0 to exit and 1 to re-enter : ");
        scanf("%d", &ag);
    } while (ag == 1);
    printf("\n23AIML046 Aditya Patel\n");
}
