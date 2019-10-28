#include<iostream>//incomplete
#include<string>
using namespace std;
int main()
{
    string qt;
    string b="";
    while(getline(cin,qt))
    {
        for(int i=0;i<qt.length();i++)
        {
            if(qt[i]=="\"" && b!="``")
            {
                qt[i]="``";
                b="``";
            }
            else{
                qt[i]="''";
                b="''";
            }
        }
    }
}
