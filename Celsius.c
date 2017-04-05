#include<stdio.h>
#include<stdlib.h>
void far(float c)
{
    printf("Your result in Celsius %f",c);

}
int main(void)
{
    float a,c;
    printf("Please, enter a number : \n");
    scanf("%f",&a);
    c=(a-32)/1.8;
    far(c);
    return 0;
}

