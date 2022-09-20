#include <iostream>

double getDouble(std::string);

int main()
{
    /* prompt for weight */
    double weight = getDouble("Please enter your weight in pounds: ");
    /* prompt for height */
    double height = getDouble("Please enter your height in inches: ");

    /* calculate bmi (body mass index) */
    double BMI = (weight / (height * height)) * 703;
    BMI = BMI / 100 / 10;

    /* check if BMI is normal and display final result based on that */
    if (BMI >= 18.5 && BMI <= 25)
    {
        std::cout << "Your BMI is: " << BMI << "\n";
        std::cout << "You are within the ideal weight range" << "\n"; 
    }
    else
    {
        std::cout << "Your BMI is: " << BMI << "\n";
        std::cout << "You are overweight. You should see your doctor." << "\n"; 
    }

    return 0;
}

double getDouble(std::string text)
{
    double number;

    std::cout << text;

    std::cin >> number;

    return number;
}