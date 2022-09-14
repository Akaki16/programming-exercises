#include <stdio.h>
#include <stdlib.h>

void calculateTargetHeartRateAndDisplay(double[], int, int, int);

int main()
{
    int restingPulse;
    int personAge;

    char buff1[10];
    char buff2[10];

    /* prompt for resting pulse */
    printf("Resting Pulse: ");
    fgets(buff1, 10, stdin);
    restingPulse = atoi(buff1);

    /* prompt for age */
    printf("Age: ");
    fgets(buff2, 10, stdin);
    personAge = atoi(buff2);

    /* validate if inputs are valid */
    while ((restingPulse < 0 || restingPulse == 0) || (personAge < 0 || personAge == 0))
    {
        printf("Resting Pulse: ");
        fgets(buff1, 10, stdin);
        restingPulse = atoi(buff1);

        printf("Age: ");
        fgets(buff2, 10, stdin);
        personAge = atoi(buff2);
    }
    
    double intensities[9] = {0.55, 0.60, 0.65, 0.70, 0.75, 0.80, 0.85, 0.90, 0.95};
    int size = sizeof(intensities) / sizeof(intensities[0]);

    printf("\n");

    printf("Resting Pulse: %d\t", restingPulse);
    printf("Age: %d\n", personAge);

    printf("\n");

    printf("Intesity   |\t");

    printf("Rate\n");

    printf("---------\t");

    printf("---------\n");

    calculateTargetHeartRateAndDisplay(intensities, size, personAge, restingPulse);

    return 0;
}

void calculateTargetHeartRateAndDisplay(double intesities[], int size, int personAge, int restingPulse)
{
    for (int i = 0; i < size; i++)
    {
        int targetHeartRate = (220 - personAge) - restingPulse;
        printf("%-10.lf%%|\t", intesities[i] * 100);
        targetHeartRate = targetHeartRate * intesities[i] + restingPulse;
        printf("%5d bpm\n", targetHeartRate);
    }
}