#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char* string;

typedef struct
{
    int number;
    string text;
}
Value;

int main()
{
    char question[200];
    printf("What's your question?: ");
    fgets(question, 200, stdin);

    srand(time(NULL));

    int randomNumber = 1 + rand() % 4;

    Value v1;
    v1.number = 1;
    v1.text = "Yes";

    Value v2;
    v2.number = 2;
    v2.text = "No";

    Value v3;
    v3.number = 3;
    v3.text = "Maybe";

    Value v4;
    v4.number = 4;
    v4.text = "Ask again later";

    Value values[4] = {v1, v2, v3, v4};
    int size = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < size; i++)
    {
        if (randomNumber == values[i].number)
        {
            printf("%s.\n", values[i].text);
        }
    }

    return 0;
}