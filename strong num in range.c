/*#include<stdio.h>
int main()
{
    int range1,range2,i,reminder,j,temp;
    int fact=1,sum=0;

    printf("Enter two ranges for strong numbers :");
    scanf(" %d %d",&range1,&range2);

    for(i=range1; i<=range2; i++)
    {
        temp=i;
        sum=0;
        while(temp!=0)
        {
            reminder=temp%10;
            fact=1;

            for(j=1; j<=reminder; j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
            temp=temp/10;
        }
        if(sum==i)
            printf("%d\t",i);
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int range1,range2,i,temp,reminder,j;
    int fact,sum;
    printf("Enter two ranges for strong number :");
    scanf(" %d %d",&range1,&range2);

    if(range1&&range2>=1)
    {

        for(i=range1; i<=range2; i++)
        {

            temp=i;
            sum=0;

            while(temp!=0)
            {
                reminder=temp%10;
                fact=1;


                for(j=1; j<=reminder; j++)
                {
                    fact=fact*j;

                }
                sum=sum+fact;
                temp=temp/10;

            }
            if(sum==i)
                printf("%d\t",i);


        }

    }
    else
        printf("Enter positive integers.");

    return 0;
}
