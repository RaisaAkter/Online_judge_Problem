#include<stdio.h>
int main()
{
    int t,n,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int stor[n];
        for(i=0;i<n;i++)
            scanf("%d",stor[i]);

        for(i=0;i<n;i++)
        {
            printf("%d  ",stor[i]);
        }
    }

}
