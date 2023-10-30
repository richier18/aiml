#include <stdio.h>
void main()
{
    //Prepared by 23AIML046 Aditya Patel
    int a, u, computer, again;
    printf("You have to pick matchstick from 1 to 4\nThen computer will pick matchstick\nThe person who picks the last matchstick will Lose\n");
    do
    {
        a = 21;
        while (1)
        {
        label:
            printf("\n\nEnter the number of sticks you want to pick from 1 to 4 : ");
            scanf("%d", &u);
            if (u > 0 && u <= 4)
            {
                computer = 5 - u;
                a = a - 5;
                printf("The number of sticks picked by computer : %d", computer);
                printf("\nThe number of sticks left : %d", a);
                if (a == 1)
                {
                    printf("\n\n\t\t\t@@@@@@@@@@@@@@@@@\n\t\t\t#LOL YOU LOST#\n\t\t\t@@@@@@@@@@@@@@@@@");
                    break;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                printf("\nPlease enter a number between 1 to 4");
                goto label;
            }
        }
        printf("\nPress 0 to exit \nPress a Non Zero number to replay : ");
        scanf("%d", &again);
    } while (again != 0);
    printf("\n23AIML046 Aditya Patel");
}
