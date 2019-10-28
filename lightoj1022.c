#include<stdio.h>
#include<math.h>

int main()
{
    double pi = 2 * acos (0.0);
    int t,casen=0;
    double p= pow(10.0,-9.0);
    double r,d;
    long double area,area_s,area_c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&r);
        d=2*r;
        area_s=d*d;
        area_c=r*pi*r;
        area=area_s-area_c;
        area=area+p;
        printf("Case %d: %.2Lf\n",++casen,area);
    }
}
