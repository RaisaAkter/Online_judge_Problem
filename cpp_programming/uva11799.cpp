#include<iostream>
using namespace std;
int main()
{
    int t,n,j;
    cin>>t;
    int speed[t];
    int test=t;
    int k=0;
    while(test--)
    {
        cin>>n;
        int spd[n];
        for(int i=0;i<n;i++)
        {
            cin>>spd[i];
            if(i==0)
                speed[k]=max(0,spd[i]);
            else
                speed[k]=max(speed[k],spd[i]);
        }
        k=k+1;
    }
    for(int i=0;i<t;i++)
        cout<<"Case "<<i+1<<": "<<speed[i]<<"\n";

}
