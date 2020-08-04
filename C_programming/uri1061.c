#include<stdio.h>
int main()
{
int d,day,se1,se2,se3,D,H,M,S,d1,d2,h1,h2,m1,m2,s1,s2;
char a[4], b[2],c[2],dd[2],e[2],f[4];
//scanf("%d%d%d%d%d%d%d%d",&d1,&h1,&m1,&s1,&d2,&h2,&m2,&s2);
scanf("%s%d", a,&d1);
scanf("%d%s%d%s%d", &h1,&b,&m1,&c,&s1);
scanf("%s%d", &f,&d2);
scanf("%d%s%d%s%d", &h2, &dd,&m2,&e,&s2);
D=(d2-(d1+1));
day=D*86400;
se1=(86400-(h1*3600+m1*60+s1));
se2=(h2*3600+m2*60+s2);
se3=(day+se1+se2);
d=se3/86400;
H=se3%86400/3600;
M=se3%86400%3600/60;
S=se3%86400%3600%60;
printf("%d dia(s)\n",d);
printf("%d hora(s)\n",H);
printf("%d minuto(s)\n",M);
printf("%d segundo(s)\n",S);
return 0;
}
