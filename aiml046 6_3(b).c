#include <stdio.h>

void main()
{
    //This program is prepared by 23AIML046 Aditya Patel
    int n;
    printf("Enter the number of Rows : ");
    scanf("%d",&n);
    int i = 1, j;
    while (i <= n)
    {
        j = 1;
        while (j <= n - i)
        {
            printf(" ");
            j++;
        }
        j = 1;
        while (j <= i)
        {
            printf("%d", j);
            j++;
        }
        i++;
        printf("\n");
    }
    printf("\n23AIML046 Aditya Patel");
}
