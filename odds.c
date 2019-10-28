#include<stdio.h>
int main()
{
    long long int A,B,od=0,i;
    scanf("%lld %lld",&A,&B);
    if(A%2==0)
        A++;
    for(i=A;i<=B;i=i+2)
    {
        //if(i%2!=0)
            od++;
    }
    printf("%lld",od);
}

