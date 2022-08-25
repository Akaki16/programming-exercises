#include <stdio.h>

typedef char* string;

int getInt(string);
void printSum(int, int);
void printDiff(int, int);
void printProduct(int, int);
void printQuotient(int, int);

int main()
{
    /* prompt for two numbers */
    int num1 = getInt("What is the first number?: ");
    int num2 = getInt("What is the second number?: ");

    /* display results */
    printSum(num1, num2);
    printDiff(num1, num2);
    printProduct(num1, num2);
    printQuotient(num1, num2);
}

int getInt(string text)
{
    int number;

    printf("%s", text);

    scanf("%d", &number);

    return number;
}

void printSum(int num1, int num2)
{
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
}

void printDiff(int num1, int num2)
{
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
}

void printProduct(int num1, int num2)
{
    printf("%d x %d = %d\n", num1, num2, num1 * num2);
}

void printQuotient(int num1, int num2)
{
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
}