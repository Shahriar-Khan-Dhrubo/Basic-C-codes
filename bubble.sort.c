#include<stdio.h>
int main()
{
    int num[]={1,2,3,4,6,5};
    int size=6,i,j,counter=0;
    int swap;
    for(i=0;i<size-1;i++)
    {
        swap=0;
        for(j=0;j<size-1-i;j++)
        {
            counter++;
            if(num[j]>num[j+1])
            {
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
                swap=1;

            }
        }
        if(swap==0)
        {
            break;
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n%d",counter);
    return 0;
}
