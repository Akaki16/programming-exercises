#include <stdio.h>

typedef char* string;

double getDouble(string);

int main()
{
    /* prompt for the principal amount */
    double principalAmount = getDouble("Enter the principal: ");
    /* prompt for the rate of interest */
    double rateOfInterest = getDouble("Enter the rate of interest: ");
    double RATE_OF_INTEREST = rateOfInterest;
    RATE_OF_INTEREST = ((RATE_OF_INTEREST / 100) * 10) / 10;
    /* prompt for the number of years */
    double numberOfYears = getDouble("Enter the number of years: ");

    /* do calculation */
    int finalAmount = principalAmount * (1 + RATE_OF_INTEREST * numberOfYears);

    /* print result */
    printf("After %.0lf years at %.1lf%%, the investment will be worth $%d.\n", numberOfYears,rateOfInterest, finalAmount);

    return 0;
}

double getDouble(string text)
{
    double number;

    printf("%s", text);

    scanf("%lf", &number);

    return number;
}