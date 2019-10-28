#include<iostream>
using namespace std;
int main()
{
    int t,n,m,nf,mf,grid;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n%3==0 && m%3==0)
            grid=(n*m)/9;
        else
        {
            nf=n-(n%3);
            mf=m-(m%3);
            grid=(nf*mf)/9;
        }
        cout<<grid<<"\n";
    }
}
