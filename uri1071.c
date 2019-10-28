#include<stdio.h>
main()
{
    long long int a,b,i,j,sum=0;
    scanf("%lld %lld",&a,&b);
    if(a>b)
    {
        if(a%2==0)
            a=a-1;
        else
            a=a-2;
        for(i=a;i>b;i=i-2)
            sum=sum+i;
    }
    else if(b>a)
    {
        if(a%2==0)
            a=a+1;
        else
            a=a+2;
        for(j=a;j<b;j=j+2)
            sum=sum+j;
    }
    else if(a==b && a%2==0)
        sum=0;
    else
        sum=a;

    printf("%lld\n",sum);
}
