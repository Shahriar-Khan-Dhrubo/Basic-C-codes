#include<stdio.h>
#include<string.h>
struct person
{
    char name[100];
    int age;
    float salary;
} ;
void display(struct person p)
{
    printf("Name : %s\n",p.name);
    printf("Age : %d\n",p.age);
    printf("Salary : %f\n",p.salary);
}
int main()
{
    //struct person person1,person2;
    //strcpy(person1.name,"Muammar Shahriar Khan Dhrubo");
    struct person person1={"Muammar Shahriar Khan Dhrubo",27,25000};
    struct person person2={"Arifa Anjum Ava",24,20000};
    printf("Person 1 : \n");
    display(person1);
    printf("Person 2 : \n");
    display(person2);

    return 0;
}
