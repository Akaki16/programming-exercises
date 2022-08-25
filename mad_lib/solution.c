#include <stdio.h>

int main()
{
    char noun[100];
    char verb[100];
    char adjective[100];
    char adverb[100];

    /* prompt for a noun */ 
    printf("Enter a noun: ");
    scanf("%s", noun);
    /* prompt for a verb */
    printf("Enter a verb: ");
    scanf("%s", verb);
    /* prompt for an adjective */
    printf("Enter a adjective: ");
    scanf("%s", adjective);
    /* prompt for an adverb */
    printf("Enter a adverb: ");
    scanf("%s", adverb);

    /* display result */
    printf("You like %s, which %s and which is %s, Also makes everything %s.\n", noun, verb, adjective, adverb);

    return 0;
}