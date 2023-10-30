#include <stdio.h>
#include <ctype.h>
void main()
{
    //Prepared by 23AIML046 Aditya Patel
    char a;
    printf("Enter the Character : ");
    a = getchar();
    if (islower(a))
    {
        printf("%c is in lower case\n", a);
        printf("%c in upper case : %c\n", a, toupper(a));
    }
    if (isupper(a))
    {
        printf("%c is in upper case\n", a);
        printf("%c in lower case : %c\n", a, tolower(a));
    }
    if (isalnum(a))
    {
        printf("%c is alphanumerical\n", a);
    }
    if (isalpha(a))
    {
        printf("%c is alphabetical\n", a);
    }
    if (isdigit(a))
    {
        printf("%c is a digit\n", a);
    }
    if (isprint(a))
    {
        printf("%c is a Printable Character\n", a);
    }
    if (ispunct(a))
    {
        printf("%c is a Punctuation Character\n", a);
    }
    if (isspace(a))
    {
        printf("%c is a white space\n", a);
    }
    printf("\n23AIML046 Aditya Patel\n");
}
