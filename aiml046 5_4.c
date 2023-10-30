#include <stdio.h>
#include <math.h>
int main()
{
    //Prepared by 23AIML052_Hriday
    float Root1, Root2, d;
    int a, b, c;
    printf("Formula ax^2+bx+c\nEnter The Values of a, b, c to find x with precision value of 3 :");
    scanf("%d,%d,%d", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    //Using Switch cases
    switch (d > 0)
    {
    case 1:
        Root1 = ((-b) + sqrt(d)) / (2 * a);
        Root2 = ((-b) - sqrt(d)) / (2 * a);
        printf("Sr.no\tInputs \tRoot1\tRoot2\timanginary\n");
        printf(" \ta b c \n");
        printf("1.   \t%d %d %d\t%.3f\t%.3fi\t", a, b, c, Root1, Root2);
        break;
    case 0:
        switch (d < 0)
        {
        case 1:
            printf("The Answer is Imaginary\n");
            Root1 = -b / (2 * a);
            Root2 = sqrt(-d) / (2 * a);
            printf("Sr.no\tInputs \tRoot1\tRoot2\timanginary\n");
            printf(" \ta b c \n");
            printf("1.   \t%d %d %d\t%.3f\t\t%.3f i", a, b, c, Root1, Root2);
            break;
        case 0:
            Root1 = -b / (2 * a);
            printf("Sr.no\tInputs\tRoot1\tRoot2\timanginary\n");
            printf(" \ta b c \n");
            printf("1.   \t%d %d %d\t%.3f", a, b, c, Root1);
            break;
        }
        break;
    }
    printf("\n23AIML052_Hriday\n");
}
