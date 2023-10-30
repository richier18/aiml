#include <stdio.h>

int main()
{
    //Prepared by 23AIML046 Aditya Patel
    int n, i = 1, j;
    printf("Enter the number of Rows : ");
    scanf("%d", &n);
    do
    {
        j = 1;
        do
        {
            printf("  ");
            j++;
        } while (j <= n - i);

        j = 1;
        do
        {
            printf("%c ", j + 64);
            j++;
        } while (j <= i);

        j = i - 1;
        do
        {
            if (j == 0)
                continue;
            else
                printf("%c ", j + 64);
            j--;
        } while (j >= 1);

        printf("\n");
        i++;
    } while (i <= n - 1);
    printf("\n23AIML046 Aditya Patel\n");
    return 0;
}
