#include<stdio.h>
#include<string.h>
int main()
{
    char n[1005];
    long long int dgt,sum,i;
    while(scanf("%s",&n)==1)
    {
        sum=0,dgt=0;
        for(i=0;i<strlen(n);i++)
        {
            dgt=n[i]-48;
            sum=sum+dgt;
        }
        printf("%lld\n",sum);
    }
}
