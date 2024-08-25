#include<stdio.h>
void searched_item(int array[],int item);
int main()
{
    int num[]={0,10,20,30,40,50,100};
    searched_item(num,100);
    return 0;
}
void searched_item(int array[],int item)
{
    int left=0,right=6;

    while(left<=right)
    {
        int middle=(left+right)/2;
        if(array[middle]==item)
        {
            printf("Item found at index %d.\n",middle);
            return;// return 0 is wrong in case of void type function
        }
        else if(array[middle]<item)
        {
            left=middle+1;
        }
        else
        {
            right=middle-1;
        }
    }
    printf("Item not found.\n");
}
