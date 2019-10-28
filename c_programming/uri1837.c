#include<stdio.h>
int main()
{
    int a,b,q,r;
    scanf("%d %d",&a,&b);
    r=a%b;
    q=a/b;
    if(a<0 && b>0)
    {
        q=(a/b)-1;
        r=a-(b*q);
    }
    printf("%d %d\n",q,r);
}////////Incomplete
