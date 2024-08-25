#include<stdio.h>

void clearBuffer();

struct person
{
    char name[30];
    int age;
    float salary;
};
int main()
{
    struct person person[2];

    int i;
    for(i=0; i<2; i++)
    {
        printf("Information for Person %d :\n\n",i+1);
        printf("Name : ");
        //fflush(stdin);
        fgets(person[i].name,sizeof(person[i].name),stdin);
        printf("Age : ");
        scanf(" %d",&person[i].age);
        printf("Salary : ");
        scanf(" %f",&person[i].salary);
        clearBuffer();
        printf("\n");
    }
    return 0;
}
void clearBuffer()
{
    int c;
    while((c=getchar())!='\n' && c!=EOF);
}
