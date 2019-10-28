/*#include<stdio.h>
main()
{
    int i,j;
    int s=7,dif=0;
    for(i=1;i<=9;i=i+2)
    {
        for(j=0;j<3;j++)
        {
            printf("I=%d J=%d\n",i,s);
            s--;
        }
        dif+=2;
        s=7+dif;
    }
}*/
#include <stdio.h>
int main()
{
    double a,b,c=1,d=3,e,f;
    int x;
    for(a=0; a<=1.9; a=a+.2)
    {
        for(b=1.0; b<=3.0; b++)
        {
            e=b+a;
            if(a==0.0||a==1.0) printf("I=%.0lf J=%.0lf",a,e);
            else if(e==3.0||e==4.0||e==5.0) printf("I=%.0lf J=%.0lf",a,e);
            else printf("I=%.1lf J=%.1lf",a,e);
            printf("\n");
        }
    }
    for(x=3; x<=5; x++) printf("I=2 J=%d\n",x);
    return 0;
}

