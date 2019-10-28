#include<stdio.h>
long long int factorial(int x)
{
    int i;
    long long int fac=1;
    for(i=x;i>x;i--)
        fac=fac*i;
    return(fac);
}
main()
{
    int n,r,r_fac,len,i,j;
    long long int team;
    long long int ans[10000000];
    while(scanf("%d",&n) != EOF)
    {
        n=n-1;
        i=0,r=3,r_fac=6;
        team=factorial(n)/(r_fac*factorial(n-r));
        ans[i]=team;
        i++;
        //printf(" %lld",team);
    }
    len=sizeof(ans)/sizeof(long long int);
    for(j=0;j<len;j++)
        printf("%lld ",ans[j]);
}
