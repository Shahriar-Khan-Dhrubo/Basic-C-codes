#include<stdio.h>
#include<conio.h>
void main()
{
    float c,f;
    printf("Enter the temperature in Centigrade:");
    scanf("%f",&c);
    f=((9*c)/5)+32;
    printf("\nThe temperature in Farenhite:%f",f);
}
