/*
Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.
*/
#include<stdio.h>
#include <stdlib.h>
int main()
{
 double weinum1,weinum2,num1,num2,result;
 printf("Weight - item1 : ");
 scanf("%lf",&weinum1);
 printf("Number of item1 : ");
 scanf("%lf",&num1);
 printf("Weight - item2 :");
 scanf("%lf",&weinum2);
 printf("Number of item2 : ");
 scanf("%lf",&num2);
 result=((weinum1*num1)+(weinum2*num2))/(num1+num2);
 printf("The average value is %f \n",result);
 return 0;
}
