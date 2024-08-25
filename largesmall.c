#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf(" %d %d",&a,&b);
    if(a>b)
        printf("%d is the large number\n%d is the small number\n",a,b);
    else if(b>a)
        printf("%d the large number\n%d is small number",b,a);
    else
        printf("The numbers are equal");
    return 0;
}
