#include <iostream>
#include <cmath>
#include <vector>

double getDouble(std::string);

double calculateAverage(std::vector<double>);
double findMin(std::vector<double>);
double findMax(std::vector<double>);
double calculateStandartDeviation(std::vector<double>);

int main()
{
    std::vector<double> numbers1;
    std::vector<double> numbers2;

    double number = getDouble("Enter a number: ");

    numbers1.push_back(number);

    while (number != 0)
    {
        number = getDouble("Enter a number: ");

        if (number != 0)
        {
            numbers1.push_back(number);
        }
    }

    std::cout << "Numbers: ";
    for (int i = 0; i < numbers1.size(); i++)
    {
        std::cout << numbers1[i] << ",";
    }

    std::cout << "\n";

    double average = calculateAverage(numbers1);
    double min = findMin(numbers1);
    double max = findMax(numbers1);

    for (int i = 0; i < numbers1.size(); i++)
    {
        double number = numbers1[i] - average;
        numbers2.push_back(number * number);
    }

    double standartDeviation = calculateAverage(numbers2);

    std::cout << "The average is " << average << "\n";
    std::cout << "The minimum is " << min << "\n";
    std::cout << "The maximum is " << max << "\n";
    std::cout << "The standart deviation is " << sqrt(standartDeviation) << "\n";

    return 0;
}

double getDouble(std::string text)
{
    double number;

    std::cout << text;

    std::cin >> number;

    return number;
}

double calculateAverage(std::vector<double> numbers)
{
    double sum = 0;

    for (int i = 0; i < numbers.size(); i++)
    {
        sum += numbers[i];
    }

    return sum / numbers.size();
}

double findMin(std::vector<double> numbers)
{
    double min;

    /* check if vector size is greater than zero and assign first element to min */
    if (numbers.size() > 0)
    {
        min = numbers[0];
        /* loop through vector and find minimum number */
        for (int i = 1; i < numbers.size(); i++)
        {
            if (min > numbers[i])
            {
                min = numbers[i];
            }
        }
    }

    return min;
}

double findMax(std::vector<double> numbers)
{
    double max;

    /* check if vector size is greater than zero and assign first element to max */
    if (numbers.size() > 0)
    {
        max = numbers[0];
        /* loop through vector and find maximum number */
        for (int i = 1; i < numbers.size(); i++)
        {
            if (max < numbers[i])
            {
                max = numbers[i];
            }
        }
    }

    return max;
}

double calculateStandartDeviation(std::vector<double> numbers)
{
    double sum = 0;

    for (int i = 0; i < numbers.size(); i++)
    {
        sum += numbers[i];
    }

    return sum / numbers.size();
}