#include<stdio.h>
int main()
{
    long long x,Valx,y,Valy,fst,d;
    int t,n=0,dif,seq,i,j;
    scanf("%d",&t);
    long long int ans[t];
    while (n!=t)
    {
        scanf("%lld %lld %lld %lld",&x,&Valx,&y,&Valy);
        d=(Valx-Valy)/(x-y);
        fst=Valx-((x-1)*d);
        ans[n]=fst;
        n++;
    }
    for (j=0;j<t;j++)
        printf("Case %d: %lld\n",j+1,ans[j]);



}

