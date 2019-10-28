#include<stdio.h>
main()
{
    int row,col,sub=0,i=0,j,c=0;
    printf("Enter row and column separated by space: ");
    scanf("%d %d",&row,&col);
    int sub_code[3];
    printf("Maximum 3 subjects can be selected.\n");
    //for(i=0;i<3;i++)
    printf("Input Course Code Separately: ");
    while(scanf("%d",&sub_code[i])!=EOF || sub<3)
    {
        //printf("Input Course Code: ");
        //scanf("%d",&sub_code[i]);
        sub++;
        i++;
    }
    for(j=1;j<=row;j++)
    {
        //c=0;
        for(i=1;i<=col;i++)
        {
            printf("%d ",sub_code[c++]);
            if(i%sub==0)
                c=0;
        }
            printf("\n");
    }
}
