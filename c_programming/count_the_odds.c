#include<stdio.h>
int main()
{
    long long int A,B,od;
    scanf("%lld %lld",&A,&B);
    if (A%2==0 && B%2==0)
    {
        A++;
        B--;
        od=((B-A)/2)+1;
    }
    else if (A%2!=0 && B%2==0)
    {
        B--;
        od=((B-A)/2)+1;
    }
    else if (A%2==0 && B%2!=0)
    {
        A++;
        od=((B-A)/2)+1;
    }
    else{
        od=((B-A)/2)+1;
    }
    printf("%lld",od);
}
