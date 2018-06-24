#include<iostream>
using namespace std;
int area(int);
int area(int ,int);
float area(float);
int main()
{
    int a,b,c,f;
    float d,e;
    cout<<"enter a,b\n ";
    cin>>a>>b;
    cout<<"enter e\n ";
    cin>>e;
    c=area(a);
    cout<<"area of square is = "<<c<<"\n\n";
    f=area(a,b);
    cout<<"area of rectangle is = "<<f<<"\n\n";
    d=area(e);
    cout<<"area of circle is = "<<d<<"\n\n";
    return 0;
}
int area(int a)
{
    return(a*a);
}
int area(int a,int b)
{
    return(a*b);
}
float area(float f)
{

    return(3.14*f*f);
}
