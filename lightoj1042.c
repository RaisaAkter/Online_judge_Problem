#include<stdio.h>
//#include<stdlib.h>
int main()
{
int a[100000],n,i,count=0;
//system ("cls");
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        if(a[i]==1)
            count++;
        n=n/2;
        }
    for(i=n;i>=0;i++)
        //printf("%d",a[i]);
}
return 0;
}
