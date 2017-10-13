/*
Write a program to read an amount (integer value) and break the amount into smallest possible number of bank notes.
Note: The possible banknotes are 100, 50, 20, 10.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amt,total;
    printf("Take a your amount: ");
    scanf("%d",&amt);
    total=amt/100;
    printf("There are: ");
    printf("\n%d Note(s) of 100.00\n", total);
    amt=(amt-(total*100));
    total=amt/50;
    printf("\n%d Note(s) of 50.00\n",total);
    amt=(amt-(total*50));
    total=amt/20;
    printf("\n%d Note(s) of 20.00\n",total);
    amt=amt-(total*20);
    total=amt/10;
    printf("\n%d Note(s) of 10.00\n",total);
    return 0;
}
