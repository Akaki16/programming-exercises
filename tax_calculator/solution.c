#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef char* string;

int getInt(string);
double calculateTax(double, int);

int main()
{
    /* prompt for the order amount */
    int orderAmount = getInt("What is the order amount?: ");
    char state[50];

    /* prompt for the state */
    printf("What is the state?: ");

    scanf("%s", state);

    /* check if state abbreviation is wi and print result based on that */
    if (strstr(state, "WI") || strstr(state, "wi") || strstr(state, "wI") || strstr(state, "Wi"))
    {
        double tax = calculateTax(5.5, orderAmount);
        double subTotal = orderAmount + tax;
        printf("The subtotal is $%.2lf\n", subTotal);
        printf("The tax is $%.2lf\n", subTotal - orderAmount);
        printf("The total is $%.2lf\n", subTotal);
    }
    else
    {
        printf("The total is $%.2f\n", (float) orderAmount);
    }

    return 0;
}

int getInt(string text)
{
    int number;

    printf("%s", text);

    scanf("%d", &number);

    return number;
}

double calculateTax(double tax, int orderAmount)
{
    return (tax / 100) * orderAmount;
}