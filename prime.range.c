#include<stdio.h>
int main()
{
    int range1,range2,i,j,count=0;
    printf("Enter two ranges for prime numbers :");
    scanf(" %d %d",&range1,&range2);
    if(range1 && range2>1)
    {
        for(i=range1;i<=range2;i++)
        {
            count=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    count++;
                    break;
                }
            }
            if(count==0)
                printf("%d\n",i);

        }
    }
    else
        printf("Enter ranges greater than 1.");
    return 0;
}
