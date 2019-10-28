#include<stdio.h>
int main()
{
    int t,n,m,z=0,star=0;
    scanf("%d",&t);
    char ans[t];
    while(z!=t)
    {
        scanf("%d %d",&n,&m);
        char grid[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                scanf("%d",grid[i][j]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)

            if (grid[i][j] >= 'A' && grid[i][j] <= 'Z')
            {
                if(grid[i-1][j+1]=="*")
                    star=star+1;
                else if(grid[i+1][j-1]=="*")
                    star++;
            }

        }
        z++;
    }
}

