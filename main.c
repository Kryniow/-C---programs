/*
Write a program to convert a given integer (in days) to years, months and days, assumes that all months have 30 days and all years have 365 days.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
        int d,y,m,ndays;
        printf("Write the number of days: ");
        scanf("%d",&ndays);
        y=ndays/365;
        ndays=ndays-(y*365);
        printf("Expected Output: %d Year(s)\n",y);
        m=ndays/30;
        d=ndays-(m*30);
        printf("Expected Output: %d Month(s)\n",m);
        printf("Expected Output: %d Days(s)",d);
        return 0;
}
