#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{

    // defining variables
    float L, G, T;
    printf("Please Enter The Length Of Pendulum in meter : ");
    scanf("%f", &L);
    printf("Please Enter The Gravitational Acceleration in m/s^2 : ");
    scanf("%f", &G);
    // Calculation
    T = 2 * pi * sqrt(L / G);
    // printing process
    printf("\nSr.no\t\tInput\t\tOutput");
    printf("\n \tLength\tGravity\t\tTime Calculated");
    printf("\n1.   \t%.2f\t%.2f\t\t%.2f Second",L,G,T);
    printf("\n\n23AIML046 Aditya Patel\n");
    return 0;
}
