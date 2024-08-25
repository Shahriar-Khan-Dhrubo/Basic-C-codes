#include<stdio.h>
int main()
{
    char a[]="Dhrubo";
    char b[]="Dhrubo";
    int d=strcmp(a,b);

    if(d==0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
    return 0;
}
