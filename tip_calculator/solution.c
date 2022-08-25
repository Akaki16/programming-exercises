#include <stdio.h>
#include <ctype.h>

typedef char* string;

double getDouble(string);
double calculateTip(double, double);
double calculateTotal(double, double);

int main()
{
    /* ask for the bill amount and for the tip rate */
    double billAmount = getDouble("What is the bill amount?: ");
    double tipRate = getDouble("What is the tip rate?: ");

    /* compute tip and total */
    double tip = calculateTip(billAmount, tipRate);
    double total = calculateTotal(billAmount, tip);

    /* display results */
    printf("Tip: $%.2lf\n", tip);
    printf("Total: $%.2lf\n", total);

    return 0;
}

double getDouble(string text)
{   
    double number;

    printf("%s", text);

    scanf("%lf", &number);

    return number;
}

double calculateTip(double billAmount, double tipRate)
{
    double tip = (billAmount * tipRate) / 100;
    return tip;
}

double calculateTotal(double billAmount, double tip)
{
    double total = billAmount + tip;
    return total;
}