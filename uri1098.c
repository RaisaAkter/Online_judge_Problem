#include<stdio.h>
int main()
{
    double i,j,s;
    for(i=0;i<=2.0;i=i+0.2)
    {
        for(j=1;j<=3;j++)
        {
            s=i+j;
            if(i==0.0||i==1.0||s==3.0||s==4.0||s==5.0)
                printf("I=%.0lf J=%.0lf\n",i,j+i);
            else
                printf("I=%.1lf J=%.1lf\n",i,j+i);
        }
    }
}
