#include<stdio.h>
main()
{
    int i,j,z,l=12;
    double sum=0.0,avg,val;
    double n[30];
    char ch;
    scanf("%c",&ch);
    switch (ch)
    {
    case 'S':
        for(i=0;i<l;i++)
        {
            for(j=0;j<l;j++)
            {
                scanf("%lf",&val);
                if((i<=5 && j<i) || (i>5 && j<l-(i+1)))
                {
                    z=0;
                    n[z]=val;
                    sum+=n[z];
                    z++;
                }
            }
        }
        printf("%.1lf\n",sum);
        break;

    case 'M':
        for(i=0;i<l;i++)
        {
            for(j=0;j<l;j++)
            {
                scanf("%lf",&val);
                if((i<=5 && j<i) || (i>5 && j<l-(i+1)))
                {
                    z=0;
                    n[z]=val;
                    sum+=n[z];
                    z++;
                }
            }
        }
        avg=sum/30;
        printf("%.1lf\n",avg);
        break;

    }
}



