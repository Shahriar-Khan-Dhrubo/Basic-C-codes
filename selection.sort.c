#include<stdio.h>
int main()
{
    int num[]= {20,30,43,45,3,-54,-5,67,89};
    int i,j,min_index;
    for(i=0; i<9; i++)
    {
        min_index=i;
        for(j=i+1; j<9; j++)
        {
            if(num[j]<num[min_index])
            {
                min_index=j;
            }
        }
        int temp=num[i];
        num[i]=num[min_index];
        num[min_index]=temp;
    }
    for(i=0; i<9; i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}
