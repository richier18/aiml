#include <stdio.h>

// Function without arguments and without a return value
void checkFactorialNoArgsNoReturn() {
    int num, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("THE FACTORIAL = %d",fact);
}

// Function without arguments but with a return value
int isFactorialNoArgsWithReturn() {
    int num, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; fact < num; i++) {
        fact *= i;
    }

      printf("THE FACTORIAL = %d",fact);
      return 0;
}

// Function with an argument but without a return value
void checkFactorialWithArgNoReturn(int num) {
    int i, fact = 1;

    for (i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("THE FACTORIAL = %d",fact);
}

// Function with an argument and a return value
int isFactorialWithArgWithReturn(int num) {
    int i, fact = 1;

    for (i = 1; fact < num; i++) {
        fact *= i;
    }

     printf("THE FACTORIAL = %d",fact);
}

int main() {
    int num;

    // (i) No arguments passed and no return value
    printf("(i) No arguments passed and no return value:\n");
    checkFactorialNoArgsNoReturn();

    // (ii) No arguments passed but a return value
    printf("\n(ii) No arguments passed but a return value:\n");
    checkisFactorialNoArgsWithReturn();

    // (iii) Argument passed but no return value
    printf("\n(iii) Argument passed but no return value:\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    checkFactorialWithArgNoReturn(num);

    // (iv) Argument passed and a return value
    printf("\n(iv) Argument passed and a return value:\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    checkisFactorialWithArgWithReturn(num);


    return 0;
}
