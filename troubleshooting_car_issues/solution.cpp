#include <iostream>
#include <bits/stdc++.h>

std::string getString(std::string);

int main()
{
    std::string turningKeyQuestion = getString("Is the car silent when you turn the key?: ");
    transform(turningKeyQuestion.begin(), turningKeyQuestion.end(), turningKeyQuestion.begin(), ::tolower);

    if (turningKeyQuestion == "yes")
    {
        std::string batteryQuestion = getString("Are the battery terminals corroded?: ");
        transform(batteryQuestion.begin(), batteryQuestion.end(), batteryQuestion.begin(), ::tolower);

        if (batteryQuestion == "yes")
        {
            std::cout << "Clear terminals and try starting again." << "\n";
        }
        else
        {
            std::cout << "Replace cables and try again." << "\n";
        }
    }
    else if (turningKeyQuestion == "no")
    {
        std::string clickingNoiseQuestion = getString("Does the car make a clicking noise?: ");
        transform(clickingNoiseQuestion.begin(), clickingNoiseQuestion.end(), clickingNoiseQuestion.begin(), ::tolower);

        if (clickingNoiseQuestion == "yes")
        {
            std::cout << "Replace the battery." << "\n";
        }
        else if (clickingNoiseQuestion == "no")
        {
            std::string failToStartQuestion = getString("Does the car crank up but fail to start?: ");
            transform(failToStartQuestion.begin(), failToStartQuestion.end(), failToStartQuestion.begin(), ::tolower);

            if (failToStartQuestion == "yes")
            {
                std::cout << "Check spark plug connections." << "\n";
            }
            else if (failToStartQuestion == "no")
            {
                std::string engineDieQuestion = getString("Does the engine start and then die?: ");
                transform(engineDieQuestion.begin(), engineDieQuestion.end(), engineDieQuestion.begin(), ::tolower);

                if (engineDieQuestion == "yes")
                {
                    std::string fuelInjectionQuestion = getString("Does your car have fuel injection?: ");
                    transform(fuelInjectionQuestion.begin(), fuelInjectionQuestion.end(), fuelInjectionQuestion.begin(), ::tolower);

                    if (fuelInjectionQuestion == "yes")
                    {
                        std::cout << "Check to ensure the choke is opening and closing." << "\n";
                    }
                    else
                    {
                        std::cout << "Get it in for service." << "\n";
                    }
                }
            }
        }
    }

    return 0;
}

std::string getString(std::string text)
{
    std::string input;

    std::cout << text;

    std::cin >> input;

    return input;
}