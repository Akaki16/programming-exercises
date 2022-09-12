#include <stdio.h>
#include <string.h>

void strlower(char[]);

int main()
{
    char turnKeyQuestion[3];
    printf("Is the car silent when you turn the key?: (YES, NO) ");
    scanf("%s", turnKeyQuestion);

    if (strstr(turnKeyQuestion, "yes"))
    {
        char batteryTerminalsQuestion[3];
        printf("Are the battery terminals corroded?: ");   
        scanf("%s", batteryTerminalsQuestion);

        if (strstr(batteryTerminalsQuestion, "yes"))
        {
            printf("Clean terminals and try starting again.\n");
        }
        else
        {
            printf("Replace cables and try again.\n");
        }
    }
    else if (strstr(turnKeyQuestion, "no"))
    {
        char clickingNoiseQuestion[3];
        printf("Does the car make a clicking noise?: ");
        scanf("%s", clickingNoiseQuestion);

        if (strstr(clickingNoiseQuestion, "yes"))
        {
            printf("Replace the battery.\n");
        }
        else if (strstr(clickingNoiseQuestion, "no"))
        {
            char carStartingQuestion[3];
            printf("Does the car crunk up but fail to start?: ");
            scanf("%s", carStartingQuestion);

            if (strstr(carStartingQuestion, "yes"))
            {
                printf("Check spark plug connections.\n");
            }
            else if (strstr(carStartingQuestion, "no"))
            {
                char engineQuestion[3];
                printf("Does the engine start and then die?: ");
                scanf("%s", engineQuestion);
                if (strstr(engineQuestion, "yes"))
                {
                    char fuelInjectionQuestion[3];
                    printf("Does your car have fuel injection?: ");
                    scanf("%s", fuelInjectionQuestion);

                    if (strstr(fuelInjectionQuestion, "no"))
                    {
                        printf("Check to ensure the choke is opening and closing.\n");
                    }
                    else
                    {
                        printf("Get it in for servie.\n");
                    }
                }
            }
        }
    }

    return 0;
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