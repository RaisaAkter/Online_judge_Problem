#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==0 || b%a==0||a%b==0)
        cout<<"Sao Multiplos"<<endl;
    else
        cout<<"Nao sao Multiplos" <<endl;

}
