#include <stdio.h>
void Fact1();
int Fact2();
void Fact3(int num);
int Fact4(int num);
int main()
{
    int n1, n2, fact2, fact4;
    printf("No Arguments No return");
    Fact1();

    printf("\n\nNo Arguments But return");
    fact2 = Fact2();
    printf("Factorial = %d", fact2);

    printf("\n\nArguments But No return");
    printf("\nEnter The Number : ");
    scanf("%d", &n1);
    Fact3(n1);

    printf("\n\nArguments & return");
    printf("\nEnter The Number : ");
    scanf("%d", &n2);
    fact4 = Fact4(n2);
    printf("Factorial = %d", fact4);
    return 0;
}
void Fact1()
{
    int num, ans = 1;
    printf("\nEnter The Number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        ans = ans * i;
    }
    printf("Factorial = %d", ans);
}
int Fact2()
{
    int num, ans = 1;
    printf("\nEnter The Number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        ans = ans * i;
    }
    return ans;
}
void Fact3(int num)
{
    int ans = 1;
    for (int i = 1; i <= num; i++)
    {
        ans = ans * i;
    }
    printf("Factorial = %d", ans);
}
int Fact4(int num)
{
    int ans = 1;
    for (int i = 1; i <= num; i++)
    {
        ans = ans * i;
    }
    return ans;
}
