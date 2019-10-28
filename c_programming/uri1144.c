#include<stdio.h>
main()
{
    long long int n,sq,cube,i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        sq=i*i;
        cube=i*i*i;
        printf("%lld %lld %lld\n",i,sq,cube);
        printf("%lld %lld %lld\n",i,sq+1,cube+1);
    }

}
