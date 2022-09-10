#include <stdio.h>
#include <string.h>

typedef char* string;

double getDouble(string);
double fahrenheitToCelsius(double);
double celsiusToFahrenheit(double);

int main()
{
    char option[1];

    printf("Press C to convert from Fahrenheit to Celsius.\n");
    printf("Press F to convert from Celsius to Fahrenheit.\n");

    printf("Your choice: ");
    scanf("%c", option);

    if (strstr(option, "C") || strstr(option, "c"))
    {
        /* prompt for temperature in fahrenheit */
        double fahrenheit = getDouble("Please enter the temperature in fahrenheit: ");
        /* convert from fahrenheit to celsius */
        double celsius = fahrenheitToCelsius(fahrenheit);
        printf("The temperature in Celsius is %.0lf\n", celsius);
    }
    else
    {
        /* prompt for temperature in celsius */
        double celsius = getDouble("Please enter the temperature in celsius: ");
        /* convert from celsius to fahrenheit */
        double fahrenheit = celsiusToFahrenheit(celsius);
        printf("The temperature in fahrenheit is %.0lf\n", fahrenheit);
    }

    return 0;
}

double getDouble(string text)
{
    double number;

    printf("%s", text);

    scanf("%lf", &number);

    return number;
}

double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}