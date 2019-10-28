#include<stdio.h>
int main()
{
    int n,w;
    double s,p;
    char name;
    //gets(name);
    scanf("%s %lf %lf",&name,&s,&p);
    s=s+(p*.15);
    printf("TOTAL = R$ %.2lf\n",s);
}

