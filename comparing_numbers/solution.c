#include <stdio.h>

typedef char* string;

int getInt(string);

int main()
{
    int number1 = getInt("Enter the first number: ");
    int number2 = getInt("Enter the second number: ");
    int number3 = getInt("Enter the third number: ");

    /* check if they are the same */
    if (number1 == number2 && number1 == number3)
    {
        // exit the program
        return -1;
    }
    
    /* determine largest number between the three */
    if (number1 > number2 && number1 > number3)
    {
        printf("The largest number is %d\n", number1);
    }
    else if (number2 > number1 && number2 > number3)
    {
        printf("The largest number is %d\n", number2);
    }
    else
    {
        printf("The largest number is %d\n", number3);
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