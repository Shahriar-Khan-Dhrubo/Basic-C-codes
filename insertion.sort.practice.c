#include<stdio.h>
int main()
{
    int array[]={3,7,4,-2,45,65,56,29,-45};
    int i,value,hole;
    for(i=1;i<9;i++)
    {
        value=array[i];
        hole=i;
        while(hole>0 && array[hole-1]>value)
        {
            array[hole]=array[hole-1];
            hole--;
        }
        array[hole]=value;
    }
    for(i=0;i<9;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
