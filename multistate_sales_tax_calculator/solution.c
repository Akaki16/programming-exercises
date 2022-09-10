#include <stdio.h>
#include <string.h>

typedef char* string;

int getInt(string);

void strlower(char[]);

int main()
{
    /* prompt for the order amount */
    int orderAmount = getInt("What is the order amount?: ");
    char state[50];

    // /* prompt for the state */
	printf("What state do you live in?: ");
    scanf("%s", state);
  	
    // convert state name into lowercase
  	strlower(state);

    /* check if state is wisconsin and calculate tax and total based on that and residence */
  	if (strstr(state, "wisconsin"))
    {
        char residence[50];

        /* prompt for the country of residence */
        printf("Please enter country of residence: e.g (eauclaire) ");
        scanf("%s", residence);

        strlower(residence);

        if (strstr(residence, "eauclaire"))
        {
            double tax = ((5.5 + 0.005) / 100) * orderAmount;
            double total = tax + orderAmount;
            printf("The tax is: $%.2lf\n", tax);
            printf("The total is: $%.2lf\n", total);
        }
        else if (strstr(residence, "dunn"))
        {
            double tax = ((5.5 + 0.004) / 100) * orderAmount;
            double total = tax + orderAmount;
            printf("The tax is: $%.2lf\n", tax);
            printf("The total is: $%.2lf\n", total);
        }
        else
        {
            double tax = (5.5 / 100) * orderAmount;
            double total = tax + orderAmount;
            printf("The tax is: $%.2lf\n", tax);
            printf("The total is: $%.2lf\n", total);
        }
    }

    /* check is state name is illionis and calculate tax and total based on that */
    if (strstr(state, "illionis"))
    {
        double tax = (8.5 / 100) * orderAmount;
        double total = tax + orderAmount;
        printf("The tax is: $%.2lf\n", tax);
        printf("The total is: $%.2lf\n", total);
    }

    /* if state neither is wisconsin nor illionis print this message */
    if (!strstr(state, "wisconsin") && !strstr(state, "illionis"))
    {
        printf("The total is $%d\n", orderAmount);
    }

    return 0;
}

int getInt(string text)
{
    int number;

    printf("%s", text);

    scanf("%d", &number);

    return number;
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