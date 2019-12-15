#include<iostream>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int s[n];
        int p=0;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            if(s[i]<=0)
                p++;
        }
        if(p>=k)
            cout<<"NO"<<endl;
        else if(p<k)
            cout<<"YES"<<endl;
    }

}
