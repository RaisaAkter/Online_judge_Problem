#include<stdio.h>
int main()
{
    int t,n,i,j,sum,casen=0;
    int arr[1000];

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]<0)
                arr[i]=0;
            sum=sum+arr[i];
        }
        printf("Case %d: %d\n",++casen,sum);
    }
}
