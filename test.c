#include<stdio.h>
int main()
{
/*int a = 10;
char temp[2];
sprintf(temp,"%d",a);*/

int a,b;
int array[5];
for(a=0;a<5;a++)
{
    scanf("%d",&b);
    array[a]=b;
}
for(a=0;a<5;a++)
    printf("%d ",array[a]);
}
