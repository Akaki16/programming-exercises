#include <iostream>

using namespace std;

int getInt(string);

int main()
{
    const int GALLON = 350;

    int length = getInt("What is the length?: ");
    int width = getInt("What is is the width?: ");

    int area = length * width;
    int gallons = area / GALLON;

    if (area > gallons)
    {
        gallons++;
    }

    if (gallons == 1)
    {
        cout << "You will need to purchase " << gallons << " gallon of\n";
        cout << "paint to cover " << area << " square feet\n"; 
    }
    else
    {
        cout << "You will need to purchase " << gallons << " gallon of\n";
        cout << "paint to cover " << area << " square feet\n";
    }

    return 0;
}

int getInt(string text)
{
    int number;

    cout << text;

    cin >> number;

    return number;
}