#include <stdio.h>

typedef char* string;

typedef struct
{
    int number;
    string name;
} Month;

int getInt(string);

int main()
{
    /* prompt for the month number */
    int monthNumber = getInt("Please enter the number of the month: ");

    Month n1;
    n1.number = 1;
    n1.name = "January";

    Month n2;
    n2.number = 2;
    n2.name = "February";

    Month n3;
    n3.number = 3;
    n3.name = "March";

    Month n4;
    n4.number = 4;
    n4.name = "April";

    Month n5;
    n5.number = 5;
    n5.name = "May";

    Month n6;
    n6.number = 6;
    n6.name = "June";

    Month n7;
    n7.number = 7;
    n7.name = "July";

    Month n8;
    n8.number = 8;
    n8.name = "August";

    Month n9;
    n9.number = 9;
    n9.name = "September";

    Month n10;
    n10.number = 10;
    n10.name = "October";

    Month n11;
    n11.number = 11;
    n11.name = "November";

    Month n12;
    n12.number = 12;
    n12.name = "December";

    /* define array where we will store all of the months */
    Month months[12] = {n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12};

    /* calculate array size */
    int arrSize = sizeof(months) / sizeof(months[0]);

    /* loop through an array and check if any month's number is equal to the number entered by the user. If it equals display month based on that number.
    */
    for (int i = 0; i < arrSize; i++)
    {
        if (months[i].number == monthNumber)
        {
            printf("The name of the month is %s\n", months[i].name);
        }
    }

    if (monthNumber < 1 || monthNumber > 12)
    {
        printf("Please enter a valid number!\n");
    }

    return 0;
}

int getInt(string text)
{
    int number;

    printf("%s", text);

    scanf("%d", &number);

    return number;
}