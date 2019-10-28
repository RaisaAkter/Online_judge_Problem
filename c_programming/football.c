
#include <stdio.h>
#include <math.h>

 main()
{
  float r,d,x,y,mul,P;
  int T,i,j,z;

//printf("number of test case\n");
scanf("%d",&T);
float ans[T];

for( i=0; i<T;i++)
{
    //printf("Input Radius r\n");
    scanf("%f",&r);

for(j=0; j<T;j++){

    mul=r*r;
    d=(mul/2);
    y=sqrt(d);
    x=sqrt(d);
    P=(4*x)+(4*y);
}
ans[i]=P;
//
}
for (z=0;z<T;z++)
    printf("%f\n",ans[z]);
}

