#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    double A,B,C;
    cin>>a>>b>>c;
    A=max(a,b);
    A=max(c,A);
     C=min(a,b);
    C=min(C,c);
    B= a+b+c-A-C;

    if(A>=(B+C))
        cout<<"NAO FORMA TRIANGULO"<<endl;
    else if(A*A==((B*B)+(C*C)))
        cout<<"TRIANGULO RETANGULO"<<endl;
    else if(A*A >((B*B)+(C*C)))
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    else if((A*A)<((B*B)+(C*C)))
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    if(A==B && B==C)
        cout<<"TRIANGULO EQUILATERO"<<endl;
    else if(A==B || B==C || A==C)
        cout<<"TRIANGULO ISOSCELES"<<endl;
}
