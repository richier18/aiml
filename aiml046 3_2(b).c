#include <stdio.h>
#include <conio.h>
void main()
{
    // Prepared by 23AIML046 Aditya Patel
    int yellow, pink, calculate,ybe,pbe;
    // calculation
    yellow = 10;
    pink = 20;
    ybe = yellow;
    pbe = pink;
    calculate = ++yellow + yellow++ + --yellow + ++pink - --pink - --pink;
    printf("Sr.No\tInstructions\t\tYellow\tpink\n");
    printf("1.   \tCount Before Execution  %d\t%d\n", ybe, pbe);
    printf("2.   \tCount After Execution   %d\t%d\n", yellow, pink);
    printf("\n23AIML046 Aditya Patel\n");
}
