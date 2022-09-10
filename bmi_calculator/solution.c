#include <stdio.h>
#include <ctype.h>

typedef char* string;

double getDouble(string);

int main()
{
    double weight;
    double height;

    do
    {   
        /* prompt for weight and height */
        weight = getDouble("Please enter your weight in pounds: ");
        height = getDouble("Please enter your height in inches: ");
    } while ((weight < 1 || weight > 500) || (height < 0.1 || height > 3));

    /* calculate body mass index (BMI) */
    double BMI = (weight / (height * height)) * 703;
    BMI = BMI / 100 / 100;

    /* check if BMI is normal and display final result based on that */
    if (BMI >= 18.5 && BMI <= 25)
    {
        printf("Your BMI is: %.1lf\n", BMI);
        printf("You are within the ideal weight range\n");
    }
    else
    {
        printf("Your BMI is: %.1lf\n", BMI);
        printf("You are overweight. You should see your doctor.\n");
    }

    return 0;
}

double getDouble(string text)
{  
    double number;

    printf("%s", text);

    scanf("%lf", &number);

    return number;
}