#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    float b;
    double c;
    char ch;
    printf("size of an integer = %d bytes\n",sizeof(a));
    printf("size of a float = %d bytes\n",sizeof(b));
    printf("size of a double = %d bytes\n",sizeof(c));
    printf("size of a character = %d bytes",sizeof(ch));
    getch();
    return 0;


}
