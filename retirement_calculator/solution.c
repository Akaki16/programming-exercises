#include <stdio.h>
#include <time.h>

typedef char* string;

int getInt(string);

int main()
{
    time_t s, val = 1;
    struct tm* currentTime;
    
    s = time(NULL);
    
    currentTime = localtime(&s);
    int currentYear = currentTime->tm_year + 1900;

    /*
        ask user how old he/she is
        ask at what age he/she would like to retire
    */
    int personAge = getInt("What is your current age?: ");
    int ageOfRetirement = getInt("At what age would you like to retire?: ");

    /* do calculations */
    int yearsLeftUntilRetirement = ageOfRetirement - personAge;
    int canRetireIn = currentYear + yearsLeftUntilRetirement;

    /* display results */
    printf("You have %d years left until you can retire\n", yearsLeftUntilRetirement);
    printf("It's %d, so you can retire in %d.\n", currentYear, canRetireIn);

    return 0;
}

int getInt(string text)
{
    int number;

    printf("%s", text);

    scanf("%d", &number);

    return number;
}