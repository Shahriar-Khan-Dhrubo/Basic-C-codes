#include<stdio.h>
int main()
{
    char a[30]="My name is ";
    char b[]="Dhrubo";
    int len=0,i=0;
    while(a[i]!='\0')
    {
        i++;
        len++;
    }
    int j=0;
    while(b[j]!='\0')
    {
        a[len+j]=b[j];
        j++;

    }
    printf("%s",a);
    return 0;
}
