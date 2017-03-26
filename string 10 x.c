#include<stdio.h>
#include<stdlib.h>
void text(int i)
{
    printf("Hello world! \n");
}
int main (void)
{
    int i;
    for(i=1;i<=10;i++)
    {
        text(i);
    }
    system("pause");
    return(0);
}
