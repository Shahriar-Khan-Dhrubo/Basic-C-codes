#include<stdio.h>
void main()
{
    float b,h,area;
    printf("Enter the base of the triangle:");
    scanf("%f",&b);
    printf("Enter the height of the triangle:");
    scanf("%f",&h);
    area=0.5*b*h;
    printf("\nArea of the triangle=%.2f",area);
}
