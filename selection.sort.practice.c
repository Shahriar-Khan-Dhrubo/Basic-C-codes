#include<stdio.h>
int main()
{
    int num[]={20,45,34,38,15,-1,-56,-43,167,654};
    int i,j,min_index;
    for(i=0;i<10;i++)
    {
        min_index=i;
        for(j=i+1;j<10;j++)
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
    for(i=0;i<10;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}
