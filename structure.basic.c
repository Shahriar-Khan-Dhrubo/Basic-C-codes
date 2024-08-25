#include<stdio.h>
#include<string.h>
struct person
{
    char name[100];
    int age;
    float salary;
};
int main()
{
    struct person person1,person2;

    strcpy(person1.name,"Muammar Shahriar Khan Dhrubo");
    person1.age = 26;
    person1.salary = 25500.75;

    strcpy(person2.name,"Arifa Anjum Ava");
    person2.age = 24;
    person2.salary = 20000;

    printf("Person1 :\n");
    printf("Name : %s\n",person1.name);
    printf("Age : %d\n",person1.age);
    printf("Salary : %.2f\n",person1.salary);

    printf("\nPerson2 :\n");
    printf("Name : %s\n",person2.name);
    printf("Age : %d\n",person2.age);
    printf("Salary : %.2f\n",person2.salary);


    return 0;
}
