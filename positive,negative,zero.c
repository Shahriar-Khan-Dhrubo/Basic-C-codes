/* Muammar Shahriar Khan Dhrubo
   RUET
   01791201477
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float a;
    printf("Enter a number:");
    scanf("%f",&a);
    if(a>0)

        printf("The number is positive");

    else if(a<0)

        printf("The number is negative");

    else

        printf("The number is zero");

    getch();
    return 0;
}

