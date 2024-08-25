#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,s,area;
    printf("Enter the lengths of the Triangle's three arms:");
    scanf("%f,%f,%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the Triangle:%.2f",area);

}
