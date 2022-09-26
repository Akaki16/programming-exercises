#include <iostream>
#include <bits/stdc++.h>
#include <vector>

std::string getString(std::string);

void displayEmployees(std::vector<std::string>);

int main()
{
    std::vector<std::string> employees;

    /* populate vector with employees */
    employees.push_back("John Smith");
    employees.push_back("Jackie Jackson");
    employees.push_back("Chris Jones");
    employees.push_back("Amanda Cullen");
    employees.push_back("Jeremy Goodwin");

    /* convert all employee names to lowercase */
    for (int i = 0; i < employees.size(); i++)
    {
        transform(employees[i].begin(), employees[i].end(), employees[i].begin(), ::tolower);
    }

    /* display employees */
    displayEmployees(employees);

    std::cout << "There are " << employees.size() << " employees:\n";

    std::cout << "\n";

    /* prompt for an employee name */
    std::string employeeToRemove = getString("Enter an employee name to remove: ");
    /* convert to lowercase */
    transform(employeeToRemove.begin(), employeeToRemove.end(), employeeToRemove.begin(), ::tolower);

    std::cout << "\n";

    /* delete employee based on user input */
    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i] == employeeToRemove)
        {
            employees.erase(employees.begin() + i);
        }
    }

    std::cout << "There are " << employees.size() << " employees:\n";
    /* display updated employees */
    displayEmployees(employees);

    return 0;
}

std::string getString(std::string text)
{
    std::string input;

    std::cout << text;

    getline(std::cin, input);

    return input;
}

void displayEmployees(std::vector<std::string> employees)
{
    for (std::string employee: employees)
    {
        std::cout << employee << "\n";
    }
}