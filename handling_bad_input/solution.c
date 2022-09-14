#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int rateOfReturn;
    char buffer[10];

    /* prompt for the rate of return */
    printf("What is the rate of return? ");
    fgets(buffer, 10, stdin);

    /* convert rate of return from string into int */
    rateOfReturn = atoi(buffer);

    /* validate user input */
    while (rateOfReturn < 0 || rateOfReturn == 0)
    {
        printf("Sorry. That's not a valid input\n");
        printf("What is the rate of return?: ");
        fgets(buffer, 10, stdin);
        rateOfReturn = atoi(buffer);
    }

    /* calculate how many years it will take to double your investment */
    int years = 72 / rateOfReturn;

    /* print final message */
    printf("It will take %d years to double your initial investment\n", years);

    return 0;
}