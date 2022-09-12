#include <stdio.h>

typedef char* string;

int getInt(string);

int main()
{
    int number;
    int total;

    /* repeat 5 times to ask user for a number */
    for (int i = 0; i < 5; i++)
    {
        number = getInt("Enter a number: ");
        total += number;
    }

    printf("The total is %d\n", total);

    return 0;
}

int getInt(string text)
{
    int number;
    
    printf("%s", text);

    scanf("%d", &number);
    
    return number;
}