#include<stdio.h>
main()
{
    int num[10];
    int i,j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]<=0)
            num[i]=1;
    }
    for(j=0;j<10;j++)
         printf("X[%d] = %d\n",j,num[j]);


}


