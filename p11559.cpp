#include<iostream>//wrong answer
using namespace std;
int main()
{
    int mini,n,b,h,w,cost=-1;
    while(cin>>n>>b>>h>>w)
    {
        int p[h];
        int a[w];
        for(int i=0;i<h;i++)
        {
            cin>>p[i];
            for(int j=0;j<w;j++)
            {
                cin>>a[j];
                mini=min(a[j],1000);
            }
            if(mini==n || mini>n)
            {
                cost=p[i]*n;
            }

        }
        if(cost<b && cost >-1)
            cout<<cost<<"\n";
        else
            cout<<"stay home\n";
    }
}
