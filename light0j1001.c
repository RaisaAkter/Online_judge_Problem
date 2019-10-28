#include<stdio.h>
int main()
{
    int t,n,result,i=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a=0,b;
        scanf("%d",&n);
        if(n<=10)
            b=n;
        else
        {
            a=n/2;
            b=n-a;
        }
        printf("%d %d\n",a,b);

    }


}
