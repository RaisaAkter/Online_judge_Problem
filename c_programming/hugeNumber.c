#include<stdio.h>
int main()
{
    int n,i;
    unsigned long long int fac=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fac=fac*i;
    printf("%llu\n",fac);
}
