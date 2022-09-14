#include <stdio.h>

void printMultiplicationTable(int);

int main()
{
    printMultiplicationTable(12);

    return 0;
}

void printMultiplicationTable(int number)
{
    for (int i = 0; i <= number; i++)
    {
        for (int j = 0; j <= number; j++)
        {
            int multResult = i * j;
            printf("%d * %d = %d\n", i, j, multResult);
        }
    }
}