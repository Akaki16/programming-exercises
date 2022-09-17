#include <iostream>

using namespace std;

double getDouble(string);

void printSum(double, double);
void printDiff(double, double);
void printProduct(double, double);
void printQuotient(double, double);

int main()
{
    double num1 = getDouble("What is the first number?: ");
    double num2 = getDouble("What is the second number?: ");

    printSum(num1, num2);
    printProduct(num1, num2);
    printDiff(num1, num2);
    printQuotient(num1, num2);

    return 0;
}

double getDouble(string text)
{
    double number;

    cout << text;

    cin >> number;

    return number;
}

void printSum(double num1, double num2)
{
    cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
}

void printDiff(double num1, double num2)
{
    cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
}

void printProduct(double num1, double num2)
{
    cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
}

void printQuotient(double num1, double num2)
{
    cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
}