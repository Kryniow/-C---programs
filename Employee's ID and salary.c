/*
Write a program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char ID[10];
    int hrs;
    double salary,salaryamo;

    printf("Write your ID employee : ");
    scanf("%s",&ID);
    printf("How many hours you work? : ");
    scanf("%d",&hrs);
    printf("What is salary amount/hr?");
    scanf("%lf",&salaryamo);
    salary=hrs*salaryamo;
    printf("Employees ID = %s \n",ID);
    printf("Salary = %2.f$\n",salary);
    return (0);
}
