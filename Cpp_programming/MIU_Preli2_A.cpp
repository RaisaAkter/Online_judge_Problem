#include<iostream>
using namespace std;
int main()
{
    int t,n,height;
    cin>>t;
    while(t--)
    {
        cin>>n;
        height=1;
        for (int i=0;i<=n;i++)
        {
            if(i%2!=0 &&i!=0)
                height=height+height;
            else if(i%2==0&&i!=0)
                height+=1;
        }
        cout<<height<<endl;
    }
}
