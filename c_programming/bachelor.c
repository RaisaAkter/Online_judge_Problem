#include<stdio.h>
int main()
{
    int t,n1,n2,n3,n4,n5,n6,b,i,expen,budgt,remain,extra;
    int m1,m2,m3,m4,m5,m6;
    scanf("%d",&t);
    //int ans[t];
    for(i=0;i<t;i++)
    {
        expen=0,budgt=0,remain=0;
        scanf("%d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6);
        expen=n1+n2+n3+n4+n5+n6;
        scanf("%d",&b);
        extra=b-expen;
        scanf("%d %d %d %d %d %d",&m1,&m2,&m3,&m4,&m5,&m6);
        budgt=m1+m2+m3+m4+m5+m6;
        extra=budgt-extra;
        if(extra<0)
            extra=0;
        printf("Case %d: %d\n",i+1,extra);
    }

}
