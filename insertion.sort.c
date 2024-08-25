#include<stdio.h>
int main()
{
    int num[]={-8,4,11,3,12};
    int i,value,hole;
    for(i=1;i<5;i++)
    {
        value=num[i];
        hole=i;
        while(hole>0 && num[hole-1]>value)
        {
            num[hole]=num[hole-1];
            hole--;
        }
        num[hole]=value;
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}
