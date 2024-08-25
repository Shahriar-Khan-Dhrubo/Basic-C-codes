#include<stdio.h>
struct person
{
    char name[50];
    int age;
    float salary;

};
typedef struct person P;
int main()
{
    P p1= {"Muammar shahriar khan dhrubo",27,25500.50};

    printf("Name : %s\n",p1.name);
    printf("Age : %d\n",p1.age);
    printf("Salary : %.2f\n",p1.salary);

    return 0;
}

