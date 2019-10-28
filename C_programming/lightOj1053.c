#include<stdio.h>
#include<math.h>
main()
{
    int i,n=0;
    long int a,b,c,t;
    const char *ans[200][3];
    scanf("%ld",&t);
    while(n!=t)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        if (a>b && a>c){
            if (a==sqrt(pow(c,2)+pow(b,2)))
                *ans[n]="Yes";
            else
                *ans[n]="no";}
        else if(b>a && b>c){
            if(b==sqrt(pow(c,2)+pow(a,2)))
                *ans[n]="yes";
            else
                *ans[n]="no";}
        else if(c>a && c>b){
            if(c==sqrt(pow(a,2)+pow(b,2)))
                *ans[n]="yes";
            else
                *ans[n]="no";}
        n=n+1;
    }
    for(i=0;i<t;i++)
        printf("Case %d: %s\n",i+1,*ans[i]);
}
