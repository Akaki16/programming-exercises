#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];

    printf("What is your name?: ");

    fgets(name, 100, stdin);

    /* Remove whitespace */
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
    {
        name[--len] = '\0';
    }

    printf("Hello, %s, nice to meet you!\n", name);

    return 0;
}