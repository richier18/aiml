#include <stdio.h>
#include <conio.h>
void main()
{
    //Prepared by 23AIML052_Hriday
    int year;
    printf("\nEnter the Year : ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("\n%d is a Leap Year\n", year);
    }
    else if (year % 400 == 0)
    {
        printf("\n%d is a Leap Year\n", year);
    }
    else
    {
        printf("\n%d is not a leap year\n", year);
    }
    printf("\n23AIML052_Hriday\n");
}
