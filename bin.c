#include<stdio.h>
#include<conio.h>
int bin(unsigned n)
{
    if (n > 1)
    {
        bin(n/2);
    }
    printf("%d",n%2);

}
int main(void)
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf(" is bin",bin(n));
    getch();
    return(0);
}
