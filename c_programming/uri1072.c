#include<stdio.h>
main()
{
    long long x,in=0,out=0;
    int n,count=0;
    scanf("%d",&n);
    count=n;
    while(count--)
    {
        scanf("%lld",&x);
        if(x>=10 && x<=20)
            in++;

    }
    out=n-in;
    printf("%lld in\n%lld out\n",in,out);
}
