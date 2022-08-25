#include <stdio.h>
#include <string.h>

int main()
{
    char quote[500];
    char author[100];

    /* prompt for a quote */
    printf("What is the quote?: ");
    fgets(quote, 500, stdin);

    size_t quoteLen = strlen(quote);
    if (quoteLen > 0 && quote[quoteLen - 1] == '\n')
    {
        quote[--quoteLen] = '\0';
    }

    /* prompt for a author */
    printf("Who said it?: ");
    fgets(author, 100, stdin);

    size_t authorLen = strlen(author);
    if (authorLen > 0 && author[authorLen - 1] == '\n')
    {
        author[--authorLen] = '\0';
    }

    /* display results */
    printf("%s says ", author);
    printf("\"%s\"\n", quote);

    return 0;
}