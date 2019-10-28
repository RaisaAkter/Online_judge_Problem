#include<stdio.h>
main()
{
    int t,i,j,n,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        scanf("%d",&n);
        int l[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&l[j]);
            sum=sum+l[j];
        }
        printf("%d\n",sum);
    }
}
