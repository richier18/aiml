#include <stdio.h>
void main()
{
    //Prepared by 23AIML046 Aditya patel
    int i, j, n;
    printf("No. of Rows : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    printf("\n23AIML046 Aditya Patel");
}
