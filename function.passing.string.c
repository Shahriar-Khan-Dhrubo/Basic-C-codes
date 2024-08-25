#include<stdio.h>
void pass(char str[]);
int main()
{
    char string[100]="Muammar Shahriar Khan Dhrubo";
    pass(string);
    return 0;
}
void pass(char str[])
{
    printf("%s",str);
}
