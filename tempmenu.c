#include<stdio.h>
int main()
{
    int option;
    float temp,convertedTemp;
    printf("Choose from conversion menu :\n");
    printf("1. Celsius to Fahrenheit \n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter option number");
    scanf(" %d",&option);
    switch(option)
    {
    case 1:
    {
        printf("Enter a temperature in Celsius :");
        scanf(" %f",&temp);
        convertedTemp = 1.8*temp+32;
        printf("%.2f Fahrenheit.",convertedTemp);
        break;
    }
    case 2:
    {
        printf("Enter a temperature in Fahrenhite :");
        scanf(" %f",&temp);
        convertedTemp = (temp-32)/1.8;
        printf("%.2f Celsius.",convertedTemp);
        break;
    }
    default:
        printf("Invalid choice.");
        break;
    }
    return 0;
}
