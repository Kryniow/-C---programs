#include<stdio.h>
#include<stdlib.h>
void fir(int n)
{
    if(n%2==0)
    {
        printf("The number is evenly!");
    }
    else
    {
        printf("The number is odd");
    }
}
int main(void)
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    fir(n);
    return(0);
}
