#include<stdio.h>
#include<math.h>
int main()
{
    float pi=3.1416;
    int i,t,j;
    int r1[100];
    int r2[100];
    int h[100];
    int p[100];
    scanf("%d",&t);
    float out[t];
    float v;
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&r1[i],&r2[i],&h[i],&p[i]);

        out[i]=((pi*p[i])/3)*((r1[i]*r1[i])+(r1[i]*r2[i])+(r2[i]*r2[i]));
    }
    for(j=0;j<t;j++)
    {
        printf("Case %d: %f\n",j+1,out[j]);
    }
}
