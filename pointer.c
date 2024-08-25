#include<stdio.h>
int main()
{
    int x=5;
    int *pointer;
    pointer=&x;
    printf("The value of x = %d\n",x);
    printf("The address of x in decimal = %u\n",&x);
    printf("The address of x in hexadecimal = %x\n",&x);
    printf("The address of x  = %u\n",pointer);
    printf("The address of pointer = %u\n",&pointer);
    printf("The address of pointer in hexadecimal = %x\n",&pointer);
    printf("The value of pointer = %d\n",*pointer);
    return 0;
}
