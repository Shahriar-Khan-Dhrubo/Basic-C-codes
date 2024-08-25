#include<stdio.h>
void bubble_sort(int array[],int size);
int main()
{
    int num[]={-4,3,23,4,65,7,356,768,675};
    int size=9,i;
    bubble_sort(num,9);
    for(i=0;i<size;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}
void bubble_sort(int array[],int size)
{
    int i,j,swap;
    for(i=0;i<size-1;i++)
    {
        swap=0;
        for(j=0;j<size-1-i;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                swap=1;
            }
        }
        if(swap==0)
        {
            break;
        }
    }
}
