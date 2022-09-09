#include <stdio.h>

typedef char* string;

int getInt(string);

int main()
{
    int age = getInt("What is your age?: ");

    if (age >= 16)
    {
        printf("You are old enough to legally drive.\n");
    }
    else
    {
        printf("You are not old enough to legally drive.\n");
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