#include<stdio.h>
double areaTriangle(double b,double h);
int main()
{
    double base,height;
    printf("Enter base & height of a triangle = ");
    scanf(" %lf %lf",&base,&height);
    double result = areaTriangle(base,height);
    printf("Area of the Triangle is = %.2lf",result);
    return 0;
}
double areaTriangle(double b,double h)
{
    return 0.5*b*h;
}
