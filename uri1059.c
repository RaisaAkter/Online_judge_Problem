/*#include<stdio.h>
int main()
{
    int i;
    for(i=2;i<=100;i+=2)
    {
        printf("%d\n",i);
    }
}
#include<stdio.h>
int main()
{
    int i,pos=0;
    int a[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            pos++;
    }
    printf("%d valores pares\n",pos);
}*/
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",i,n,i*n);
    }
}
