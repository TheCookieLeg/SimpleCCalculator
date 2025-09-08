#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int calculate(int choice, int a, int b)
{
    if (choice == 1) {
        return (a+b);
    } else if (choice == 2) {
        return (a-b);
    } else if (choice == 3) {
        return (a*b);
    } else if (choice == 4) {
        if (b != 0) {
            return (a/b);
        } else {
            printf("A number cannot be divided by zero. Please try again\n");
            exit(1);
        }
    } else {
        printf("Something is not valid. Please try again\n");
        exit(1);
    }
}

int main(void)
{
    int choice;
    int num1;
    int num2;
    int result;

    printf("Hello, user! What kind of calculation would you like to make today?\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    scanf("%i", &choice);

    if (choice > 4) {
        printf("Choice invalid. Please restart and try again.\n");
        return 1;
    }

    printf("Excellent choice! Now what numbers should I work with?\n");
    printf("Please choose the first number:\n");

    scanf("%i", &num1);

    printf("You chose: %i. Now what is the second number?\n", num1);

    scanf("%i", &num2);

    printf("You chose %i. Allow me to calculate this. It might take some time\n", num2);

    for (int i = 0; i < 10; i++) {
        printf(".");
        Sleep(400);
    }
    printf("\n");

    result = calculate(choice, num1, num2);

    printf("Thanks for waiting!\n");
    printf("The result is: %i", result);



    return 0;
}