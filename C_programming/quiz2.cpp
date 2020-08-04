#include<iostream>
using namespace std;
int main()
{
int x=-1,i,y;
for(i=0;i<10;i++)
    x+=4;
x%=5;
if(x%2==0)
   cout<<x<<" which is even";
else
   cout<<x<<" which is odd";

}
