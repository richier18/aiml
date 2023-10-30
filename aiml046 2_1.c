#include <stdio.h>
void main()
{
    // defining the variables
    int Total_Population = 80000;
    int Number_of_Literate = Total_Population * (0.48);
    int Number_of_Men = Total_Population * (0.52);
    int Number_of_literate_Men = Total_Population * (0.35);
    int Number_of_illiterate_Men = Number_of_Men - Number_of_literate_Men;
    int Number_of_Women = Total_Population * (1 - 0.52);
    int Number_of_litterate_Women = Number_of_Literate - Number_of_literate_Men;
    int Number_of_illiterate_Women = Number_of_Women - Number_of_litterate_Women;
    // printing the result
    printf("Sr.no\tRESULT\t\t   Value");
    printf("\n\n1. \tTotal Population\t    %d", Total_Population);
    printf("\n\n2. \tNumber Of Literate          %d", Number_of_Literate);
    printf("\n\n3. \tNumber Of Men               %d", Number_of_Men);
    printf("\n\n4. \tNumber Of literate Men      %d", Number_of_literate_Men);
    printf("\n\n5. \tNumber Of illiterate Men    %d", Number_of_illiterate_Men);
    printf("\n\n6. \tNumber Of Women             %d", Number_of_Women);
    printf("\n\n7. \tNumber Of Literate Women    %d", Number_of_litterate_Women);
    printf("\n\n8. \tNumber Of Illiterate Women  %d\n", Number_of_illiterate_Women);
    printf("\n23AIML046 Aditya Patel\n");
}
