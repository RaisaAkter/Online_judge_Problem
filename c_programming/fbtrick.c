#include<stdio.h>

//char yes(char)

int main()
{
    //printf("Enter 2 integer number:\n");
    //printf("Addition of %d & %d is %d.\n\nDo you want to run again?press y for continue and n for exit.\n\n",a,b,a+b);
    //printf("wrong key pressed!Do you want to run again?press y for continue and n for exit.\n\n");
    //printf("Program end.\n");
    int a,b,c=1;
    char con='y',cntn='y',exit='n';
while(con=='y')
    {
    printf("Enter 2 integer number:\n");
    scanf("%d %d",&a,&b);
    printf("Addition of %d & %d is %d.\n\nDo you want to run again?press y for continue and n for exit.\n\n",a,b,a+b);
    scanf(" %c",&con);
    if(con=='n')
    {
        printf("Program end.\n");
        break;
    }
    else if(con != cntn && con != exit)
       {
        printf("wrong key pressed!Do you want to run again?press y for continue and n for exit.\n\n");
        scanf(" %c",&con);
        if(con=='n')
    {
        printf("Program end.\n");
        break;
    }
       }
    }
}
