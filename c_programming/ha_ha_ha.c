#include<stdio.h>
int main()
{
int t,A,B,i;
scanf("%d",&t);
int ans[t];
int n=0;
while(n!=t)
{
    scanf("%d %d",&A, &B);
    ans[n]=(A*A)+(B*B);
    n++;
}
for(i=1;i<=t;i++)
    printf("Case %d: %d\n",i,ans[i-1]);

}

