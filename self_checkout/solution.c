#include <stdio.h>

typedef char* string;

double getDouble(string);
double calculateSubTotal(
    double,
    double,
    double,
    double,
    double,
    double
);
double calculateTax(double);
double calculateTotal(double, double);

int main()
{
    /* Prompt for the prices and quantities of three items */
    double item1Price = getDouble("Enter the price of item 1: ");
    double item1Quantity = getDouble("Enter the quantity of item 1: ");
    double item2Price = getDouble("Enter the price of item 2: ");
    double item2Quantity = getDouble("Enter the quantity of item 2: ");
    double item3Price = getDouble("Enter the price of item 3: ");
    double item3Quantity = getDouble("Enter the quantity of item 3: ");

    /* make calculations */
    const double SUB_TOTAL = calculateSubTotal(
        item1Quantity,
        item1Price,
        item2Quantity,
        item2Price,
        item3Quantity,
        item3Price
    );
    const double TAX = calculateTax(SUB_TOTAL);
    const double TOTAL = calculateTotal(SUB_TOTAL, TAX);

    printf("\n");

    /*print results */
    printf("Subtotal: %.2lf\n", SUB_TOTAL);
    printf("Tax: %.2lf\n", TAX);
    printf("Total: %.2lf\n", TOTAL);

    return 0;
}

double getDouble(string text)
{
    double number;

    printf("%s", text);

    scanf("%lf", &number);

    return number;
}

double calculateSubTotal(
    double item1Quantity,
    double item1Price,
    double item2Quantity,
    double item2Price,
    double item3Quantity,
    double item3Price
)
{
    double total = (item1Quantity * item1Price) + (item2Quantity * item2Price) + (item3Quantity * item3Price);
    return total;
}

double calculateTax(double subTotal)
{
    double tax = (5.5 / 100) * subTotal;
    return tax;
}

double calculateTotal(double subTotal, double tax)
{
    double total = subTotal + tax;
    return total;
}