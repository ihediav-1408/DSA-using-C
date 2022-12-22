#include <stdio.h>
#include <string.h>
struct train{
    char name[50];
    int hours;
    int min;
    char ap[2];
};
int main()
{
    int i;
    struct train tt[5];
    for(i=0;i<5;i++)
    {
        printf("\nEnter train name.");
        scanf("%s",tt[i].name);
        printf("\nEnter the arrival time");
        printf("\nHours:");
        scanf("%d",&tt[i].hours);
        printf("\nMinutes:");
        scanf("%d",&tt[i].min);
        printf("\nEnter AM or PM");
        scanf("%s",tt[i].ap);
    }
    printf("\nTRAIN DETAILS:");
    for(i=0;i<5;i++)
    {
        printf("\nTrain %d:",i);
        printf("\nName: %s",tt[i].name);
        printf("\nTime:");
        if(strcmp(tt[i].ap,"AM")==0)
        {
            if(tt[i].hours==12)
            {
                printf("00:%d",tt[i].min);
            }
            else
            {
                printf("%d:%d Hrs",tt[i].hours,tt[i].min);
            }
        }
        else if(strcmp(tt[i].ap,"PM")==0)
        {
            if(tt[i].hours==12)
            {
                printf("12:%d",tt[i].min);
            }
            else
            {
                printf("%d:%d Hrs",tt[i].hours+12,tt[i].min);
            }
        }
        else
        {
            printf("INVALID FORMAT.");
        }
    }
    return 0;
}