#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,p,page=0;
    cin>>n>>p;
    if(n%2==0)
        n++;
    int last_page = abs(p /2);
    int tar_page = abs((p-n)/2);
    page=min(last_page,tar_page);
    cout<<page<<endl;

}

