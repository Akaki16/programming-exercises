#include <iostream>
#include <bits/stdc++.h>

int getInt(std::string);
std::string getString(std::string);

int main()
{
  /* prompt for the order amount */
  int orderAmount = getInt("What is the order amount?: ");

  /* prompt for the state */
  std::string state = getString("What state do you live in?: ");

  /* convert state into lowercase */
  transform(state.begin(), state.end(), state.begin(), ::tolower);

  if (state == "wisconsin")
  {
    /* prompt for the country of residence */
    std::string countryOfResidence = getString("Please enter country of residence: e.g (eauclaire) ");

    /* convert country of residence into lowercase */
    transform(countryOfResidence.begin(), countryOfResidence.end(), countryOfResidence.begin(), ::tolower);

    if (countryOfResidence == "eauclaire")
    {
        /* calculate tax and total */
        double tax = ((5.5 + 0.005) / 100) * orderAmount;
        // tax = tax / 10;
        double total = orderAmount + tax;
        std::cout << "The tax is: $" << tax << "\n";
        std::cout << "The total is: $" << total << "\n";
    }
    else if (countryOfResidence == "dunn")
    {
        /* calculate tax and total */
        double tax = ((5.5 + 0.004) / 100) * orderAmount;
        // tax = tax / 10;
        double total = orderAmount + tax;
        std::cout << "The tax is: $" << tax << "\n";
        std::cout << "The total is: $" << total << "\n";
    }
    else
    {
        /* calculate tax and total */
        double tax = (5.5 / 100) * orderAmount;
        // tax = tax / 10;
        double total = orderAmount + tax;
        std::cout << "The tax is: $" << tax << "\n";
        std::cout << "The total is: $" << total << "\n";
    }

    if (state == "illionis")
    {
        /* calculate tax and total */
        double tax = (8.5 / 100) * orderAmount;
        // tax = tax / 10;
        double total = orderAmount + tax;
        std::cout << "The tax is: $" << tax << "\n";
        std::cout << "The total is: $" << total << "\n";
    }

    if (state != "wisconsin" && state != "illionis")
    {
        std::cout << "The total is: $" << orderAmount << "\n";
    }

  }
  
  return 0;
}

int getInt(std::string text)
{
  int number;

  std::cout << text;

  std::cin >> number;

  return number;
}

std::string getString(std::string text)
{
  std::string input;

  std::cout << text;

  std::cin >> input;

  return input;
}