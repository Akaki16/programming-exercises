#include <iostream>

void printMultiplicationTable(int, int);

int main()
{
    printMultiplicationTable(12, 12);

    return 0;
}

void printMultiplicationTable(int rows, int columns)
{
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= columns; j++)
        {
            std::cout << i << " * " << j << " = " << i * j << "\n";
        }
    }
}