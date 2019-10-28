#include<stdio.h>
int main()
{
int t,a,b,i;
scanf("%d",&t);
int ans[t];
int c=0;
while(c!=t)
{
    scanf("%d %d",&a, &b);
    ans[c]=a+b;
    c=c+1;
}
for(i=1;i<=t;i++)
    printf("Case %d: %d\n",i,ans[i-1]);

}
