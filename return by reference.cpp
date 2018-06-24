2#include<iostream>
using namespace std;
int & great(int &a,int &b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int c,d,g;
    cout<<"enter c and d\n";
    cin>>c>>d;
    g=great(c,d);
    cout<<g<<"\n";
    great(c,d)= -1;
    cout<<"c= " <<c<<"  "<<"d= "<<d;
}
