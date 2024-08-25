#include<stdio.h>
void max(int a[]);
int main()
{
    int num[]={10,30,40,50,190,456,32,365};
    max(num);
    return 0;
}
void max(int a[])
{
    int value=a[0],i;
    for(i=1;i<8;i++)
    {
        if(value<=a[i])
            value=a[i];

    }
    printf("The maximum integer is = %d",value);
}
