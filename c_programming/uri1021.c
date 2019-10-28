#include<stdio.h>
#include<math.h>
int main()
{
    double d,n;
    int note,coin,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12;
    scanf("%lf",&n);
    note=n;
    coin=(n-note)*100;
    if((coin*1000)%10==9)
        coin++;
    printf("NOTAS:\n");

    d1=note/100;
    note=note%100;
    printf("%d nota(s) de R$ 100.00\n",d1);

    d2=note/50;
    note=note%50;
    printf("%d nota(s) de R$ 50.00\n",d2);

    d3=note/20;
    note=note%20;
    printf("%d nota(s) de R$ 20.00\n",d3);

    d4=note/10;
    note=note%10;
    printf("%d nota(s) de R$ 10.00\n",d4);

    d5=note/5;
    note=note%5;
    printf("%d nota(s) de R$ 5.00\n",d5);

    d6=note/2;
    note=note%2;
    //printf("%d\n",note);
    printf("%d nota(s) de R$ 2.00\n",d6);

    printf("MOEDAS:\n");
    d7=note/1;
    note=note%1;
    printf("%d moeda(s) de R$ 1.00\n",d7);

    d7=coin/50;
    coin=coin%50;
    printf("%d moeda(s) de R$ 0.50\n",d7);

    d8=coin/25;
    coin=coin%25;
    printf("%d moeda(s) de R$ 0.25\n",d8);

    d9=coin/10;
    coin=coin%10;
    printf("%d moeda(s) de R$ 0.10\n",d9);

    d10=coin/5;
    coin=coin%5;
    printf("%d moeda(s) de R$ 0.05\n",d10);

    d11=coin/1;
    //coin=coin%50;
    printf("%d moeda(s) de R$ 0.01\n",d11);


}
