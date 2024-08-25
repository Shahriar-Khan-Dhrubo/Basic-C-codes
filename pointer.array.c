#include<stdio.h>
int main()
{
    int num[]={10,20,30,40,50,60};
    int *p,i;

    p=num;
    for(i=0;i<6;i++)
    {
        printf("%d ",*(p+i));

    }
    return 0;
}
