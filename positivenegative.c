#include<stdio.h>
int main()
{
    float a;
    printf("Enter a number :");
    scanf(" %f",&a);
    if(a<0)
        printf("%.2f is a negative number.",a);
    else if(a>0)
        printf("%.2f is a positive number.",a);
    else
        printf("The number is zero.");
    return 0;
}
