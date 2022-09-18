#include <iostream>

using namespace std;

double getDouble(string);

int main()
{
    double length = getDouble("What is the length of the room in feets?: ");
    double width = getDouble("What is the width of the room in feets?: ");

    double areaInFeets = length * width;
    double areaInMeters = areaInFeets * 0.09290304;

    cout << "You entered dimensions of " << length << " feet " << "by " << width << " feet\n";
    cout << "The area is\n";
    cout << areaInFeets << " feet\n";
    cout << areaInMeters << " meters\n";

    return 0;
}

double getDouble(string text)
{
    double number;

    cout << text;

    cin >> number;

    return number;
}