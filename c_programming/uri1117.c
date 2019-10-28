#include<stdio.h>
main()
{
    int i,j,k=1;
    double a,b,m;
    while(k==1)
    {
        scanf("%lf",&a);
        if(a>=0.0 && a<=10.0)
        {
            scanf("%lf",&b);
            m=(a+b)/2.0;
            printf("media = %.2lf\n");
            break;
        }
        else
            printf("nota invalida\n");
    }

}

