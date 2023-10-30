#include <stdio.h>
#include <conio.h>
void main()
{
    // Prepared by 23AIML046 AdityaPatel
    int quantity;
    float price, t;
    printf("Enter the Quantity of the Item : ");
    scanf("%d", &quantity);
    printf("Enter the price per Item : ");
    scanf("%f", &price);
    t = price * quantity;
    if (quantity >= 1000)
    {
        printf("Your original Price is = %f\n", t);
        printf("But we are giving you 10%c Discount on your Purchase as your qnt exceeded 1000\n\n", 37);
        t = t - t * (0.1);
    }
    printf("Sr.no\tQuantity\tPrice per Item\tFinal Price\n\n");
    printf("1.   \t%d   \t\t%.3f \t\t%f\n", quantity, price, t);
    printf("\n23AIML046 Aditya Patel\n");
}
