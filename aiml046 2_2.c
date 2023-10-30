#include <stdio.h>
#include <stdio.h>
int main()
{
    // defining variables for calculation
    float BS;
    printf("Enter Your Basic Salary : ");
    scanf("%f", &BS);
    float IT;
    printf("Enter Your Income Tax : ");
    scanf("%f", &IT);
    // Calculations

    float DA = BS * 0.7;
    float HRA = BS * 0.07;
    float MA = BS * 0.02;
    float TA = BS * 0.04;

    float PF = BS * 0.12;

    float GS = BS + DA + HRA + MA + TA;
    float NS = GS - PF - IT;

    // Print

    printf("Sr.No\t\tInput - Output\t\t\tAmount\n\n");
    printf("1\t\tBasic Salary  \t\t\t%.2f\n", BS);
    printf("2\t\tDA of Basic Salary\t\t%.2f\n", DA);
    printf("3\t\tHRA of Basic Salary   \t\t%.2f\n", HRA);
    printf("4\t\tMA of Basic Salary\t\t%.2f\n", MA);
    printf("5\t\tTA of Basic Salary\t\t%.2f\n", TA);
    printf("6\t\tPF of Basic Salary\t\t%.2f\n", PF);
    printf("7\t\tGross Salary  \t\t\t%.2f\n", GS);
    printf("8\t\tNet Salary\t\t\t%.2f\n", NS);
    printf("\n23AIML046 Aditya Patel");
    return 0;
}
