#include <iostream>

int getInt(std::string);

int findLargest(int n1, int n2, int n3);

int main()
{
    int num1 = getInt("Enter the first number: ");
    int num2 = getInt("Enter the second number: ");
    int num3 = getInt("Enter the third number: ");

    int largestNumber = findLargest(num1, num2, num3);

    std::cout << "The largest number is: " << largestNumber << "\n";

    return 0;
}

int getInt(std::string text)
{
    int number;

    std::cout << text;

    std::cin >> number;

    return number;
}

int findLargest(int n1, int n2, int n3)
{
    if (n1 > n2 && n1 > n3)
    {
        return n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        return n2;
    }
    else if (n3 > n1 && n3 > n2)
    {
        return n3;
    }
}