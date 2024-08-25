#include<stdio.h>
int main()
{
    int x;
    float y;
    char z;
    double a;
    printf("enter an integer,float,character & double number : ");
    scanf(" %d %f %c %lf",&x,&y,&z,&a);
    printf("You have entered %d as integer, %f as float , %c as character & %lf as double number",x,y,z,a);
}
