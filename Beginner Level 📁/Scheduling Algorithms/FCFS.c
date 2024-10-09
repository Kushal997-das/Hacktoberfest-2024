//First Come First Serve
#include <stdio.h>
int main()
{
    int p[10], at[10], bt[10], ct[10], tat[10], wt[10], i, j, temp = 0, n;
    float awt = 0, atat = 0;
    printf("enter no of proccess you want:");
    scanf("%d", &n);
    printf("enter %d process:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("enter %d arrival time:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &at[i]);
    }
    printf("enter %d burst time:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - i); j++)
        {
            if (at[j] > at[j + 1])
            {
                temp = p[j + 1];
                p[j + 1] = p[j];
                p[j] = temp;
                temp = at[j + 1];
                at[j + 1] = at[j];
                at[j] = temp;
                temp = bt[j + 1];
                bt[j + 1] = bt[j];
                bt[j] = temp;
            }
        }
    }

    /* calculating 1st ct */
    ct[0] = at[0] + bt[0];
    /* calculating 2 to n ct */
    for (i = 1; i < n; i++)
    {
        // when proess is ideal in between i and i+1
        temp = 0;
        if (ct[i - 1] < at[i])
        {
            temp = at[i] - ct[i - 1];
        }
        ct[i] = ct[i - 1] + bt[i] + temp;
    }
    
    /* calculating tat and wt */
    printf("\np\t A.T\t B.T\t C.T\t TAT\t WT");
    for (i = 0; i < n; i++)
    {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        atat += tat[i];
        awt += wt[i];
    }
    atat = atat / n;
    awt = awt / n;
    for (i = 0; i < n; i++)
    {
        printf("\nP%d\t %d\t %d\t %d \t %d \t %d", p[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }
    printf("\naverage turnaround time is %f", atat);

    printf("\naverage wating timme is %f", awt);
    return 0;
}
