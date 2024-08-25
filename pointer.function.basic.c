#include<stdio.h>
int add(int a,int b);

int main()
{
    int (*p)(int,int);
    p=add;
    int result=p(10,20);
    printf("Result= %d",result);
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
