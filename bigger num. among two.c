#include<stdio.h>
void main()
{
    float a,b;
    printf("Enter two numbers:");
    scanf("%f,%f",&a,&b);
    if(a>b)
        printf("%.2f is bigger number.",a);
    else
        printf("%.2f is bigger number.",b);
}
