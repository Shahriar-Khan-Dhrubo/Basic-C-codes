#include<stdio.h>
#define Pi 3.1416
void main()
{
    float r,area;
    printf("Enter the radius of Circle:");
    scanf("%f",&r);
    area=Pi*r*r;
    printf("Area: %.2f",area);

}
