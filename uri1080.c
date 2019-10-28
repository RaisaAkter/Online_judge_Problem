#include<stdio.h>
main()
{
    int n,i,max=-1,pos;
    int num[100];
    for(i=0;i<100;i++)
    {
        scanf("%d",&n);
        num[i]=n;
        if(max<num[i])
        {
            max=num[i];
            pos=i+1;
        }
    }
    printf("%d\n",max);
    printf("%d\n",pos);
}
