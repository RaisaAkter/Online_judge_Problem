#include<stdio.h>
int main()
{
    int t,i,casen=0;
    long long int sum,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n%2!=0)
            sum=(n/2+1)-((n/2)*2);
        else
            sum=n/2-(n/2)*2;
        printf("%lld\n",sum);
    }
}
