#include <stdio.h>
#include <conio.h>
void main()
{
	// Prepared by 23AIML046 Aditya patel
	int a, b;
	printf("Value of a=");
	scanf("%d", &a);
	printf("Value of b=");
	scanf("%d", &b);
	printf("Sr.no\tInstructions\t\tNumber1\tNumber2\n");
	printf("1.   \tBefore Swap \t\t%d\t%d\n", a, b);
	//CALCUTIONS
	a = a + b;
	b = a - b;
	a = a - b;
	printf("2.   \tAfter Swap  \t\t%d\t%d", a, b);
	printf("\n23AIML046 Aditya Patel\n");

}
