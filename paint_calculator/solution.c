#include <stdio.h>

typedef char* string;

int getInt(string);

int main()
{
    /* assume that one gallon covers 350 feet */
    const int GALLON = 350;

    /* prompt for the length and width */
    int length = getInt("What is the length?: ");
    int width = getInt("What is the width?: ");

    /* make calculations */
    int area = length * width;
    int gallons = area / GALLON;

    if (area > gallons)
    {
        gallons++;
    }

    printf("\n");

    /* print result */
    printf("You will need to purchase %d gallons of paint to cover %d square feet.\n", gallons, area);

    return 0;
}

int getInt(string text)
{
    int number;

    printf("%s", text);

    scanf("%d", &number);

    return number;
}