#include<stdio.h>
int main()
{
    int n1,n2,n3,a=1,b=3,c=5,sum=0;
    printf("Enter last 3 digits of the multiplication series :");
    scanf(" %d %d %d",&n1,&n2,&n3);
    printf("1.3.5+2.5.7+3.7.9+....+%d.%d.%d = ",n1,n2,n3);

    while(a<=n1 && b<=n2 && c<=n3)
    {
        sum=sum+a*b*c;
        a++;
        b=b+2;
        c+=2;
    }
    printf("%d",sum);
    return 0;
}
