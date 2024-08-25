#include<stdio.h>
int main()
{
    char a[]="Muammar Shahriar Khan";
    int length= strlen(a);
    printf("%d",length);
    int i=0,count=0;
    while(a[i]!='\0')
    {
        i++;
        count++;
    }
    printf("\n%d",count);
    return 0;
}
