#include<stdio.h>
main()
{
    int n,i,j=0,loc,num,min;
    scanf("%d",&n);
    int dig[n];
    scanf("%d",&dig[0]);
    min=dig[0];
    for(i=1;i<n;i++)
    {
        scanf("%d",&dig[i]);
        if (dig[i]<min)
        {
            min=dig[i];
            j=i;
        }

    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",j);

}
