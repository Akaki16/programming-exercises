#include <iostream>
#include <bits/stdc++.h>

std::string getString(std::string);

bool isAnagram(std::string, std::string);

int main()
{
    /* prompt for two anagrams */
    std::cout << "Enter two strings and I will tell you if they are anagrams:" << "\n";

    std::string first = getString("Enter the first string note: ");
    std::string second = getString("Enter the second string node: ");

    bool result = isAnagram(first, second);

    if (result == 1)
    {
        std::cout << first << " and " << second << " are anagrams.\n";
    }
    else
    {
        std::cout << first << " and " << second << " are not anagrams." << "\n"; 
    }

    return 0;
}

bool isAnagram(std::string str1, std::string str2)
{
    /* Get length of both strings */
    int str1Length = str1.length();
    int str2Length = str2.length();

    /* if lengths are not equal they cannot be anagrams */
    if (str1Length != str2Length)
    {
        return false;
    }

    /* Sort both strings */
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    /* Compare sorted strings */
    for (int i = 0; i < str1Length; i++)
    {
        if (str1[i] != str2[i])
        {
            return false;
        }
        if (str1[i] == str2[i])
        {
            return true;
        }
    }
}

std::string getString(std::string text)
{
    std::string input;

    std::cout << text;

    std::cin >> input;

    return input;
}