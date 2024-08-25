#include<stdio.h>
void display(int a[]);
int main()
{
    int num[]={10,3,5,68,67};
    display(num);
    return 0;
}
void display(int a[])
{
    int i;
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
}
