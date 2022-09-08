#include <stdio.h>
#include <string.h>

int main()
{
    char password[10];
    char correctPassword[] = "12345abc";

    /* prompt for the password */
    printf("What is the password: ");
    scanf("%s", password);

    /* check password */
    int checkPassword = strcmp(password, correctPassword);

    /* print result based on password */
    if (checkPassword == 0)
    {
        printf("Welcome\n");
    }
    else
    {
        printf("I don't know you\n");
    }

}