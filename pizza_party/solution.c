#include <stdio.h>

typedef char* string;

int getInt(string);

int main()
{
    int people = getInt("How many people?: ");
    int pizzas = getInt("How many pizzas do you have?: ");

    /* make calculations */
    int result = people / pizzas;
    int personGets = people / result;
    int pizzasLeft = people % result;

    printf("\n");

    printf("%d people with %d pizzas\n", people, pizzas);

    printf("\n");

    /* print results */
    printf("Each person gets %d pieces of pizza.\n", personGets);
    printf("There are %d leftover pieces\n", pizzasLeft);

    return 0;
}

int getInt(string text)
{
    int number;

    printf("%s", text);

    scanf("%d", &number);

    return number;
}