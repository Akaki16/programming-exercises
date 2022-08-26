#include <stdio.h>

typedef char* string;

double getDouble(string);

int main()
{
    double length = getDouble("What is the length of the room in feet?: ");
    double width = getDouble("What is the width of the room in feet?: ");

    printf("\n");

    printf("You entered dimensions of %.0lf feet by %.0lf feet\n\n", length, width);

    /* make calculations */
    double areaInFeets = length * width;
    double areaInMeters = areaInFeets * 0.09290304;

    /* print results */
    printf("The area is\n");
    printf("%.0lf square feet\n", areaInFeets);
    printf("%.0lf square meters\n", areaInMeters);

    return 0;
}

double getDouble(string text) {
    double number;

    printf("%s", text);

    scanf("%lf", &number);

    return number;
}