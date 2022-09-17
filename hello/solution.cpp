#include <iostream>

using namespace std;

int main()
{
    string name;

    cout << "What is your name?: ";

    cin >> name;

    cout << "Hello, " + name + "," + " Nice to meet you!\n";

    return 0;
}