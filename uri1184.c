#include<stdio.h>
main()
{
    int i,j,l=12;
    double sum=0.0,avg,val;
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
                if(j<i)
                {
                    sum+=val;
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
                if(j<i)
                {

                    sum+=val;
                }
            }
        }
        avg=sum/66;
        printf("%.1lf\n",avg);
        break;

    }
}






