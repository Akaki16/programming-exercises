#include <stdio.h>
#include <string.h>

typedef char* string;

string passwordValidator(char[]);
void strlower(char[]);

int main()
{
    char password[500];
    printf("Enter your password: ");
    scanf("%s", password);

    printf("%s\n", passwordValidator(password));

    return 0;
}

string passwordValidator(char pwd[])
{
    strlower(pwd);

    string numbers[9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
    const char *chars[26] = {"q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "a", "s", "d", "f", "g", "h", "j", "k", "l", "z", "x", "c", "v", "b", "n", "m"};
    int numbersLen = sizeof(numbers) / sizeof(numbers[0]);
    int charsLen = sizeof(chars) / sizeof(chars[0]);

    /* determine very weak password */
    if (strstr(pwd, "1") || strstr(pwd, "2") || strstr(pwd, "3") || strstr(pwd, "4") || strstr(pwd, "5") || strstr(pwd, "6") || strstr(pwd, "7") || strstr(pwd, "8") || strstr(pwd, "9") && strlen(pwd) < 8)
    {
        return "very weak";
    }

    /* determine weak password */
    if (strstr(pwd, "q") || strstr(pwd, "w") || strstr(pwd, "e") || strstr(pwd, "r") || strstr(pwd, "t") || strstr(pwd, "y") || strstr(pwd, "u") || strstr(pwd, "i") || strstr(pwd, "o") || strstr(pwd, "p") || strstr(pwd, "a") || strstr(pwd, "s") || strstr(pwd, "d") || strstr(pwd, "f") || strstr(pwd, "g") || strstr(pwd, "h") || strstr(pwd, "j") || strstr(pwd, "k") || strstr(pwd, "l") || strstr(pwd, "z") || strstr(pwd, "x") || strstr(pwd, "c") || strstr(pwd, "v") || strstr(pwd, "b") || strstr(pwd, "n") || strstr(pwd, "m") && strlen(pwd) < 8)
    {
        return "weak";
    }

    /* determine strong password */
    for (int i = 0; i < numbersLen; i++)
    {
        for (int j = 0; j < charsLen; j++)
        {
            if (strstr(pwd, numbers[i]) && strstr(pwd, chars[j]) && strlen(pwd) < 8)
            {
                return "strong";
            }
        }
    }
    
}

void strlower(char str[])
{
    for (int i = 0; str[i]!='\0'; i++)
  	{
  		if(str[i] >= 'A' && str[i] <= 'Z')
  		{
  			str[i] = str[i] + 32;
		}
  	}
}