#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

typedef struct
{
    string name;
    int index;
}
Employee;

void strlower(char[]);

int main()
{
    Employee emp1;
    emp1.name = "john smith";
    emp1.index = 0;

    Employee emp2;
    emp2.name = "jackie jackson";
    emp2.index = 1;

    Employee emp3;
    emp3.name = "chris jones";
    emp3.index = 2;

    Employee emp4;
    emp4.name = "amanda cullen";
    emp4.index = 3;

    Employee emp5;
    emp5.name = "jeremy goodwin";
    emp5.index = 4;

    Employee employees[5] = {emp1, emp2, emp3, emp4, emp5};
    int size = sizeof(employees) / sizeof(employees[0]);

    printf("There are 5 employees:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%s\n", employees[i].name);
    }

    char employeeNameToRemove[100];
    printf("Enter an employee name to remove: ");
    fgets(employeeNameToRemove, 100, stdin);

    int result = strcmp(employeeNameToRemove, employees[0].name);

    printf("%d\n", result);

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