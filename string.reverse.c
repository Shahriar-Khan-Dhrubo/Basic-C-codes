#include<stdio.h>
int main()
{
    char a[10]="DHRUBO";
    char b[10];
    int count=0,i=0,j;
    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    for(j=0; j<count; j++)
    {
        b[j]=a[count-j-1];
    }
    b[count]='\0';
    printf("%s",b);
    return 0;
}
