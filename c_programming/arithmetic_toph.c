#include<stdio.h>
int main()
{
    int t,a1,a2,a3,n,i,j,d;
    int term;
    //int value[100];
    //int condition[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&a1,&a2,&a3,&n);
        if((a2-a1)==(a3-a2))
        {
            term=a1+(n-1)*(a2-a1);
            printf("Case %d: %d\n",i+1,term);
            //value[i]=term;
            //condition[i]=1;
        }
        else if (a1==a2 && a2==a3)
            //condition[i]=0;
            printf("Case %d: Error\n",i+1);

        else
            //condition[i]=0;
             printf("Case %d: Error\n",i+1);
    }
    /*for(j=0;j<t;j++)
    {
        if(condition[j]==1)
            printf("Case %d: %ld\n",j+1,value[j]);
        else
            printf("Case %d: Error\n",j+1);

    }*/

}
