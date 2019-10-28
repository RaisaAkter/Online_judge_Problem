#include<stdio.h>
int main()
{
    int m,n,sum,i,temp;
    //scanf("%d %d",&m,&n);
    while(scanf(" %d%d",&m,&n))
    {
        if(m<=0 || n<=0)
            break;
        if(n>m)
        {
            temp=m;
            m=n;
            n=temp;
        }
        sum=(m*(m+1))/2;
        sum=sum-(n*(n-1)/2);
        for(i=n;i<=m;i++)
        {
            printf("%d ",i);
        }
        printf("Sum=%d\n",sum);
    }
}
