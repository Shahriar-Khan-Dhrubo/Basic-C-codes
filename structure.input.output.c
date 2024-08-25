#include<stdio.h>
#include<string.h>
struct person
{
    char name[50];
    int age;
    float salary;
};
int main()
{
    struct person person1={"Muammar Shahriar Khan Dhrubo",26,25500.50};
    struct person person2,person3;

    printf("Person1 : \n");
    printf("Name : %s\n",person1.name);
    printf("Age : %d\n",person1.age);
    printf("Salary : %.2f\n",person1.salary);

    printf("\nPerson2 :\n");
    printf("Name : ");
    fgets(person2.name,sizeof(person2.name),stdin);
    printf("Age : ");
    scanf(" %d",&person2.age);
    printf("salary : ");
    scanf(" %f",&person2.salary);

    person3=person1;
    printf("\nPerson3 : \n");
    printf("Name : %s\n",person3.name);
    printf("Age : %d\n",person3.age);
    printf("Salary : %.2f\n",person3.salary);

    //checking for equal or not
    int d=strcmp(person1.name,person2.name);
    if(d==0 && person1.age==person2.age && person1.salary==person2.salary)
        printf("\nPerson1 equals to person3.\n");
    else
            printf("\nPerson1 not equals to person3.\n");

    return 0;
}
