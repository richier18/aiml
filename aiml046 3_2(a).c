#include <stdio.h>
#include <conio.h>
int main()
{
    // PREPARED BY ADITYA PATEL 23AIML046
    int yellow, rajiv, preet, raj, ritul, afterexecution;
    yellow = 10;
    // calculations
    rajiv = ++yellow;
    preet = --yellow;
    raj = yellow++;
    ritul = yellow--;
    // printing
    printf("Rajiv after execution : %d\n", rajiv);
    printf("Preet after execution : %d\n", preet);
    printf("Raj after execution : %d\n", raj);
    printf("Ritul after execution : %d\n", ritul);
    printf("Sr.No\tInstructions\t\tYellow\n");
    printf("1.   \tCount Before Execution  %d\n", yellow);
    printf("2.   \tCount After Execution   %d\n", ritul);
    printf("\n23AIML046 Aditya Patel\n");
    return(0);
}
