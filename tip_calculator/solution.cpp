#include <iostream>

using namespace std;

double getDouble(string);
double calculateTip(double, double);
double calculateTotal(double, double);

int main()
{
    /* prompt for the bill amount */
    double billAmount = getDouble("What is the bill amount?: ");
    /* prompt for the tip rate */
    double tipRate = getDouble("What is the tip rate?: ");

    /* compute tip and total */
    double tip = calculateTip(billAmount, tipRate);
    double total = calculateTotal(billAmount, tip);

    /* display results */
    cout << "Tip: $" << tip << "\n";
    cout << "Total: $" << total << "\n";

    return 0;
}

double getDouble(string text)
{
    double number;

    cout << text;

    cin >> number;

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