#include<stdio.h>
int main()
{
    unsigned long long m,a;
    while(scanf("%llu",&m)!= -1)
    {
        if(m==0)
            printf("%llu\n",m);
        else if (m==-1)
            break;
        else
        {
            a=m-1;
            printf("%llu\n",a);
        }
    }
}
