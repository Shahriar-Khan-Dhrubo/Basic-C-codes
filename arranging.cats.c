#include<stdio.h>
#include<string.h>
int main()
{
    int test_cases,i;
    scanf(" %d",&test_cases);
    for(i=1; i<=test_cases; i++)
    {
        int n,j,k,days=0;
        scanf(" %d",&n);
        char string1[n+1],string2[n+1];
        scanf(" %s",string1);
        scanf(" %s",string2);
        if(strcmp(string1,string2)==0)
        {
            printf("%d\n",days);
        }
        else
        {
            int s1=0,s2=0;
            for(k=0; k<n; k++)
            {
                if(string1[k]=='1' && string2[k]=='0')
                    s1++;
                else if(string1[k]=='0' && string2[k]=='1')
                    s2++;
            }
            if(s1>=s2)
                days=s1;
            else
                days=s2;
            printf("%d\n",days);
        }
    }
    return 0;
}
