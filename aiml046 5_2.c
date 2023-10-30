#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    //Prepared by 23AIML046 Aditya Patel
    float x1, x2, x3, y1, y2, y3, s1, s2;
    printf("(x1,y1),(x2,y2),(x3,y3) are points on a cartesian plane\nEnter the values of x1,y1, x2,y2, x3,y3 to find out if they are co-linear or not?\n");
    printf("x1 = ");
    scanf("%f", &x1);
    printf("y1 = ");
    scanf("%f", &y1);
    printf("x2 = ");
    scanf("%f", &x2);
    printf("y2 = ");
    scanf("%f", &y2);
    printf("x3 = ");
    scanf("%f", &x3);
    printf("y3 = ");
    scanf("%f", &y3);
    s1 = fabs(x2 - x1) / fabs(y2 - y1);
    s2 = fabs(x3 - x2) / fabs(y3 - y2);
    //Using if else statement
    if (s1 == s2)
    {
        printf(" Points are Co - linear\n");
    }
    else
    {
        printf(" Points are not Co - linear\n");
    }
    printf("\n23AIML046 AdityaPatel\n");
    return 0;
}
