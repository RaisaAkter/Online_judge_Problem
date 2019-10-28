#include<stdio.h>
main()
{
    int col,i,j,z;
    double sum=0.0,avg,val;
    double n[12];
    char ch;
    scanf("%d",&col);
    scanf(" %c",&ch);
    switch (ch)
    {
    case 'S':
        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                scanf("%lf",&val);
                if(col==j)
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
        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                scanf("%lf",&val);
                if(col==j)
                {
                    z=0;
                    n[z]=val;
                    sum+=n[z];
                    z++;
                }
            }
        }
        avg=sum/12;
        printf("%.1lf\n",avg);
        break;

    }


}
