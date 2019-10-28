#include<stdio.h>
int main()
{
int A,B,dif;
scanf("%d %d",&A,&B);
if (A>=B)
    dif=A-B;
else if(B>A)
    dif=B-A;

    printf("%d",dif);

}
