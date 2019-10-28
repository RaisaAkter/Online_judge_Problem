#include<stdio.h>
main()
{
    int t,p_m,p_l,op_cl=9,entr_ex=10,i,casen=0,time;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&p_m,&p_l);
        if(p_m<p_l)
            time=(p_l-p_m)*4+p_m*4+op_cl+entr_ex;
        else
            time=(p_m-p_l)*4+p_m*4+op_cl+entr_ex;
        printf("Case %d: %d\n",++casen,time);
    }
}
