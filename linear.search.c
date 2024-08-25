#include<stdio.h>
int main()
{
    int num[]={13,15,12,45,78,89};
    int value,position=0,i;
    printf("Enter a number for search : ");
    scanf(" %d",&value);

    for(i=0;i<6;i++)
    {
        if(value==num[i])
        {
            printf("Found\n");
            position=i+1;
            printf("Position of the number is : %d",position);
            break;
        }


    }
    if(position==0)
            printf("Not found.");
    return 0;
}
