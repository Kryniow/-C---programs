/*
Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point).
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int distance;
    float fluel;
    printf("Input total distance in km: ");
    scanf("%d",&distance);
    printf("Input total fuel spent in liters: ");
    scanf("%f",&fluel);
    printf("Average consumption (km/lt) %.3f",distance/fluel);
    return 0;

}
