#include<stdio.h>
int main()
{
    int x=10,y=15,z=25;
    int *pointer;

    pointer=&x;
    printf("The value of x = %d\n",*pointer);

    pointer=&y;
    printf("The value of y = %d\n",*pointer);

    pointer=&z;
    printf("The value of z = %d\n",*pointer);
    return 0;
}
