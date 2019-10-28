/*#include<stdio.h>
main()
{
    int x,y,i,j=0;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        if(i%x==0)
        {
            printf("%d",i);
            printf("\n");
        }
        else
            printf("%d ", i);

    }
    return 0;

}*/
#include <stdio.h>
int main()
{
    int X,Y,z,a,b=0;
    scanf("%d%d", &X,&Y);
    for(a=1; a<=Y; a++)
    {
        b++;
        if(b==X) printf("%d",a);
        else printf("%d ", a);
        if(b==X)
        {
            b=0;
            printf("\n");
        }
    }
    return 0;
}

