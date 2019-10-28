#include<stdio.h>
#include<string.h>
int main()
{
    int year,i,j,count,len;
    char name[100];
    char code[100];
    scanf("%[^\n]%*c",&name);//with space
    len = strlen(name);
    for(i=0;i<len;i=i+3)
    {
        j=0;
        if( name[i] >= '0' && name[i] <= '9' )
            code[j]=name[i];
        else
            code[j]=name[i]-32;
        printf("%c",code[j]);
        j++;
    }

}
