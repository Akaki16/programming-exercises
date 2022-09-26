#include <iostream>

int getInt(std::string);

int main()
{
    int restingPulse = getInt("Resting Pulse: ");
    int personAge = getInt("Age: ");

    double intensities[9] = {0.55, 0.60, 0.65, 0.70, 0.75, 0.80, 0.85, 0.90, 0.95};
    int size = sizeof(intensities) / sizeof(intensities[0]);

    std::cout << "\n";

    std::cout << "Resting Pulse: " << restingPulse << "\t";
    std::cout << "Age: " << personAge << "\n";

    std::cout << "\n";

    std::cout << "Intensity" << "\t";
    std::cout << "Rate" << "\n";

    for (int i = 0; i < size; i++)
    {
        int targetHeartRate = (220 - personAge) - restingPulse;
        std::cout << intensities[i] * 100 << "%" << "\t";
        targetHeartRate = targetHeartRate * intensities[i] + restingPulse;
        std::cout << targetHeartRate << " bpm" << "\n";
    }

    return 0;
}

int getInt(std::string text)
{
    int number;

    std::cout << text;

    std::cin >> number;

    return number;
}