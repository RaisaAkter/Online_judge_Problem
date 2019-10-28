#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,r1,r2,div;

    scanf("%lf %lf %lf",&a,&b,&c);
    div=(b*b)-4*a*c;
    if(a==0 || div<0)
    {
        printf("Impossivel calcular\n");
        return;
    }
    else
    {
        r1=((0-b)+(sqrt(div)))/(2*a);
        r2=((0-b)-(sqrt(div)))/(2*a);
    }
    printf("R1 = %.5lf\n",r1);
    printf("R2 = %.5lf\n",r2);
}

