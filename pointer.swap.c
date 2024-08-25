#include<stdio.h>
int main()
{
    int x=10,y=20,temp;
    int *p1,*p2;

    p1=&x;
    p2=&y;

    temp=*p1;
    *p1=*p2;
    *p2=temp;

    printf("The value of x = %d\n",x);
    printf("The value of y = %d\n",y);

    return 0;
}
