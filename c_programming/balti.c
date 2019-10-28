#include<stdio.h>

int main()
{
    long int N,M,sum=0,i,p,sum1=0,sum2=0,temp;
    while(scanf("%ld%ld",&N,&M)==2)
    {
        if(M<N){
            temp =M;
                M= N;
              N= temp;
        }
       p=N-1;
       sum1=p*(p+1)/2;
       sum2=M*(M+1)/2;
       sum=sum2-sum1;
       printf("Sum of %ld to %ld is -> %ld;\n",N,M,sum);
       sum=0;
    }
    return 0;
}
