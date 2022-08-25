#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[100];

    printf("What is the input string?: ");

    fgets(buffer, 100, stdin);

    /* Remove whitespace */
    size_t len = strlen(buffer);
    if (len > 0 && buffer[len - 1] == '\n')
    {
        buffer[--len] = '\0';
    }

    /* Get string length */
    int numberOfChars = strlen(buffer);

    /* Output result */
    printf("%s has %d characters\n", buffer, numberOfChars);

    return 0;
}