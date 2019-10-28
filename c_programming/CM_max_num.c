#include<stdio.h>
main()
{
    int t,a,b,c,i,j,max;
    scanf("%d",&t);
    int ans[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>=b && a>=c)
            ans[i]=a;
        else if(b>=a && b>=c)
            ans[i]=b;
        else if(c>=a && c>=b)
            ans[i]=c;
    }
    for(i=0;i<t;i++)
        printf("Case %d: %d\n",i+1,ans[i]);

}
