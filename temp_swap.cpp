#include<iostream>
using namespace std;
template<class type>
void swa(type &a,type &b)
{
  type c;
  c=a;
  a=b;
  b=c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"a= "<<a<<"   b = "<<b<<endl;
    swa(a,b);
    cout<<"After swaping A is = "<<a<<"   B is "<<b<<endl;
    float c,d;
    cin>>c>>d;
    cout<<"c= "<<c<<"   d = "<<d<<endl;
    swa(c,d);
    cout<<"After swaping C is = "<<c<<"   D is "<<d<<endl;
    char f,e;
    cin>>e>>f;
    cout<<"e= "<<e<<"    f = "<<f<<endl;
    swa(e,f);
    cout<<"After swaping E is = "<<e<<"    F is "<<f<<endl;
    return 0;
}
