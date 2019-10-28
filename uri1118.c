#include<stdio.h>
int main()
{
    double a,b,media;
    int c=1;
    while(c==1)
    {
        scanf("%lf",&a);
        if(a>10 || a<0)
            printf("nota invalida\n");
        scanf("%lf",&b);
        if(b>10 || b<0)
            printf("nota invalida\n");
        if(a>=0 && a<=10 && b>=0 && b<=10)
        {
            media=(a+b)/2.0;
            printf("media = %.2lf\n",media);
            break;
            }
    }


}
