#include<stdio.h>
int main()
{
    int n,size,i,j,k=0,t=1;
    while(scanf("%d",&n)!= -1)
    {
        size=(n*(n+1)/2)+1;
        int arr[size];
        k=0;
        for(i=0;i<=n;i++)
        {
            if(i==0)
            {
                arr[k]=i;
                k++;
            }
            for(j=0;j<i;j++)
            {
                arr[k]=i;
                k++;
            }
        }
        printf("Caso %d: %d numero\n",t,size);
        t++;
        for(k=0;k<size;k++)
        {
            printf("%d ",arr[k]);
        }
        printf("\n");
    }
//////////Incomplete
}
