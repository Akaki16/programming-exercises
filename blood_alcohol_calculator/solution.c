#include <stdio.h>
#include <string.h>

typedef char* string;

double getDouble(string);
int getInt(string);

int main()
{   
    char gender[10];
    /*
        alcohol distribution ratio for men is 0.73
        alcohol distribution ratio for women is 0.66
    */
    const double R_MEN = 0.73;
    const double R_WOMEN = 0.66;
    double BAC;

    printf("Enter your gender: ");
    scanf("%s", gender);
    
    /*
        prompt for gender
        prompt for total alcohol consumed
        prompt for body weight
        prompt for number of hours since last drink
    */
    double totalAlcoholConsumed = getInt("Enter total alcohol consumed in ounces: ");
    double bodyWeight = getDouble("Enter your weight: ");
    double numberOfHoursSinceLastDrink = getInt("Enter number of hours since last drink: ");

    /* calculate blood alcohol content based on gender */
    if (strstr(gender, "male") || strstr(gender, "MALE"))
    {
        BAC = (totalAlcoholConsumed * 5.14 / bodyWeight * R_MEN) - .015 * numberOfHoursSinceLastDrink;
    }
    else
    {
        BAC = (totalAlcoholConsumed * 5.14 / bodyWeight * R_WOMEN) - .015 * numberOfHoursSinceLastDrink;
    }

    /* display final result based on blood alcohol content */
    if (BAC < 0.08)
    {
        printf("Your BAC is: %.2lf\n", BAC);
        printf("It is legal for you drive.\n");
    }
    else
    {
        printf("It is not legal for you drive.\n");
        printf("Your BAC is: %.2lf\n", BAC);
    }

    return 0;
}

double getDouble(string text) {
    double number;

    printf("%s", text);

    scanf("%lf", &number);

    return number;
}

int getInt(string text)
{
    int number;

    printf("%s", text);

    scanf("%d", &number);
    
    return number;
}