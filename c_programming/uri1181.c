#include<stdio.h>
int main()
{
    int line,i,j;
    double arr[12][12];
    double avg,sum=0;
    char op='g' ;
    scanf("%d",&line);
    scanf(" %c",&op);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++){
            scanf("%lf",&arr[i][j]);
            if(i==line)
                sum=sum+ arr[i][j];
            }
    }
    if(op =='S')
    {
        //for(j=0;j<12;j++){
            //sum=sum+arr[line][j];
        //}
        printf("%.1lf\n",sum);
    }
    else if(op =='M')
    {
        //for(j=0;j<3;j++)
            //sum=sum+arr[line][j];
        avg=sum/12.0;
        printf("%.1lf\n",avg);
    }
}
