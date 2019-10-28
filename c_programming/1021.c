#include<stdio.h>

int main()
{
    float N;
    int n1=0,n2=0,n3=0,n4=0,n5=0,n6=0;
    int m1=0,m2=0,m3=0,m4=0,m5=0,m6=0;

    scanf("%f",&N);

    while(N>=100)
    {
        N=N-100;
        n1++;
    }

    while(N>=50)
    {
        N=N-50;
        n2++;
    }

    while(N>=20)
    {
        N=N-20;
        n3++;
    }

    while(N>=10)
    {
        N=N-10;
        n4++;
    }

    while(N>=5)
    {
        N=N-5;
        n5++;
    }

    while(N>=2)
    {
        N=N-2;
        n6++;
    }

    while(N>=1)
    {
        N=N-1;
        m1++;
    }

    while(N>=0.50)
    {
        N=N-0.50;
        m2++;
    }

    while(N>=0.25)
    {
        N=N-0.25;
        m3++;
    }

    while(N>=0.10)
    {
        N=N-0.10;
        m4++;
    }

    while(N>=0.05)
    {
        N=N-0.05;
        m5++;
    }

    while(N>=0.01)
    {
        N=N-0.01;
        m6++;
    }


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n1);
    printf("%d nota(s) de R$ 50.00\n",n2);
    printf("%d nota(s) de R$ 20.00\n",n3);
    printf("%d nota(s) de R$ 10.00\n",n4);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n6);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",m1);
    printf("%d moeda(s) de R$ 0.50\n",m2);
    printf("%d moeda(s) de R$ 0.25\n",m3);
    printf("%d moeda(s) de R$ 0.10\n",m4);
    printf("%d moeda(s) de R$ 0.05\n",m5);
    printf("%d moeda(s) de R$ 0.01\n",m6);


    return 0;
}
