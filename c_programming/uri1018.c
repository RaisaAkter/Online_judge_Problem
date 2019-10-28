#include<stdio.h>
int main()
{
    int note,coin,d1,d2,d3,d4,d5,d6,d7;
    scanf("%d",&note);

    printf("%d\n",note);

    d1=note/100;
    note=note%100;
    printf("%d nota(s) de R$ 100,00\n",d1);

    d2=note/50;
    note=note%50;
    printf("%d nota(s) de R$ 50,00\n",d2);

    d3=note/20;
    note=note%20;
    printf("%d nota(s) de R$ 20,00\n",d3);

    d4=note/10;
    note=note%10;
    printf("%d nota(s) de R$ 10,00\n",d4);

    d5=note/5;
    note=note%5;
    printf("%d nota(s) de R$ 5,00\n",d5);

    d6=note/2;
    note=note%2;
    //printf("%d\n",note);
    printf("%d nota(s) de R$ 2,00\n",d6);
    d7=note/1;
    note=note%1;
    printf("%d nota(s) de R$ 1,00\n",d7);




}

