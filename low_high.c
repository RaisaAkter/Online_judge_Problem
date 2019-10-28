#include<stdio.h>
#include<string.h>
main()
{
    char word[10000];
    int t,i,j,z,len;
    scanf("%d",&t);
    int ans[t];
    for(i=0;i<t;i++)
    {
        int upper=0,lower=0,digit=0;
        scanf("%s",word);
        len=strlen(word);
        for(j=0;j<len;j++)
        {
            if(word[j]>='A' && word[j]<='Z')
                upper=upper+1;
            else if(word[j]>='a' && word[j]<='z')
                lower=lower+1;
            else if(word[j]>='0' && word[j]<='9')
                digit=digit+1;
        }
        if(upper>lower)
            ans[i]=lower+digit;
        else if(lower>upper)
            ans[i]=upper+digit;
        else if (lower==upper)
            ans[i]=lower+digit;

    }
    for(z=0;z<t;z++)
        printf("Case %d: %d\n",z+1,ans[z]);
}
