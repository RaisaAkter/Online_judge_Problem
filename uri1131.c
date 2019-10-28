#include<stdio.h>
main()
{
    int i,g,op,c=0,n=1,vi=0,vg=0,equ=0;
    while(n==1)
    {
        scanf("%d %d",&i,&g);
        c++;
        if(i>g)
            vi++;
        else if(g>i)
            vg++;
        else
            equ++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&n);
        if(n==2)
        {
            break;

        }
    }
    printf("%d grenais\n",c);
    printf("Inter:%d\n",vi);
    printf("Gremio:%d\n",vg);
    printf("Empates:%d\n",equ);
    if(vi>vg)
        printf("Inter venceu mais\n");
    else if(vg>vi)
        printf("Gremio venceu mais\n");
}
