#include <iostream>
#include <ctime>

using namespace std;

int getInt(string);

int main()
{
    time_t ttime = time(0);
    tm *localTime = localtime(&ttime);

    const int currentYear = 1900 + localTime->tm_year;

    int currentAge = getInt("What is your current age?: ");
    int wouldLikeToRetire = getInt("At what age would you like to retire?: ");

    int timeLeft = wouldLikeToRetire - currentAge;
    int willRetire = timeLeft + currentYear;

    cout << "You have " << timeLeft << " years" << " until you can retire.\n";
    cout << "It's " << currentYear << " so you can retire at " << willRetire << "\n";

    return 0;
}

int getInt(string text)
{
    int number;

    cout << text;

    cin >> number;

    return number;
}