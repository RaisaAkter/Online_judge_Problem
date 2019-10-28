#include<stdio.h>
int main()
{
    int n,m;
    long int sum1,sum2,t,temp;
    long long int sum;
    while(scanf("%d %d",&n,&m)==2)
    {
        if (n>m)
        {
            temp=n;
            n=m;
            m=temp;
        }
        t=n-1;
        sum1=(m*(m+1))/2;
        sum2=(t*(t+1))/2;
        sum=sum1-sum2;
        printf("Sum of %d to %d is -> %ld;\n",n,m,sum);

    }
}
