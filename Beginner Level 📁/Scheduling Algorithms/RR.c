//Round Robin
#include <stdio.h>

int main()
{
    // Input no of processed
    int n;
    printf("Enter Total Number of Processes:");
    scanf("%d", &n);
    int WT = 0, TAT = 0, AT[n], BT[n], temp_BT[n];
    int x = n;

    // Input details of processes
    for (int i = 0; i < n; i++)
    {
        printf("Enter Details of Process %d \n", i + 1);
        printf("Arrival Time:  ");
        scanf("%d", &AT[i]);
        printf("Burst Time:   ");
        scanf("%d", &BT[i]);
        temp_BT[i] = BT[i];
    }

    // Input time slot
    int TQ;
    printf("Enter Time Slot:");
    scanf("%d", &TQ);

    // Total indicates total time
    // counter indicates which process is executed

    int total = 0, counter = 0, i;
    printf("Process ID       Burst Time       Turnaround Time      Waiting Time\n");

    for (total = 0, i = 0; x != 0;)
    {
        // define the conditions
        if (temp_BT[i] <= TQ && temp_BT[i] > 0)
        {
            total = total + temp_BT[i];
            temp_BT[i] = 0;
            counter = 1;
        }
        else if (temp_BT[i] > 0)
        {
            temp_BT[i] = temp_BT[i] - TQ;
            total += TQ;
        }
        if (temp_BT[i] == 0 && counter == 1)
        {
            x--; // decrement the process no.
            printf("\nProcess No %d  \t\t %d\t\t\t\t %d\t\t\t %d", i + 1, BT[i],
                   total - AT[i], total - AT[i] - BT[i]);
            WT = WT + total - AT[i] - BT[i];
            TAT += total - AT[i];
            counter = 0;
        }
        if (i == n - 1)
        {
            i = 0;
        }
        else if (AT[i + 1] <= total)
        {
            i++;
        }
        else
        {
            i = 0;
        }
    }

    float AWT = WT * 1.0 / n;
    float ATAT = TAT * 1.0 / n;
    printf("\nAverage Waiting Time: %d", AWT);
    printf("\nAvg Turnaround Time: %d", ATAT);
    return 0;
}