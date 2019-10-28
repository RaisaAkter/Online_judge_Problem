#include<stdio.h>
int main()
{
    float s,newS,extra;
    int p;
    scanf("%f",&s);
    if(s>=0 && s<=400.00)
    {
        p=15;
        extra=(s*p)/100;
        newS=s+extra;
    }
    else if(s>=400.01 && s<=800.00)
    {
        p=12;
        extra=(s*p)/100;
        newS=s+extra;
    }
    else if(s>=800.01 && s<=1200.00)
    {
        p=10;
        extra=(s*p)/100;
        newS=s+extra;
    }
    else if(s>=1200.01 && s<=2000.00)
    {
        p=7;
        extra=(s*p)/100;
        newS=s+extra;
    }
    else if(s>2000.00)
    {
        p=4;
        extra=(s*p)/100;
        newS=s+extra;
    }
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",newS,extra,p);
}
