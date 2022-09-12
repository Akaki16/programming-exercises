#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char[], char[]);
void sort(char[]);

int main()
{
    char str1[100];
    printf("Enter the first string: ");
    scanf("%s", str1);

    char str2[100];
    printf("Enter the second string: ");
    scanf("%s", str2);

    bool result = isAnagram(str1, str2);

    /* print final message based on result value */
    if (result == 1)
    {
        printf("\"%s\" and \"%s\" are anagrams\n", str1, str2);
    }
    else
    {
        printf("\"%s\" and \"%s\" are not anagrams\n", str1, str2);
    }
    
    return 0;
}

bool isAnagram(char input1[], char input2[])
{
    char str1[100];
    char str2[100];

    strcpy(str1, input1);
    stpcpy(str2, input2);

    /* check to see if both of the string has the same length */
    if (strlen(str1) != strlen(str2))
    {
        return false;
    }

    /* sort both the strings */
    sort(str1);
    sort(str2);

    /* compare sorted strings */
    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] != str2[i])
        {
            return false;
        }
        return true;
    }

    printf("%s\n", str1);
    printf("%s\n", str2);
}

void sort(char str[])
{
    char temp;
    int i, j, len;
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)
        {
            if(str[j]>str[j+1])
            {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}