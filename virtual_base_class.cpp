#include <iostream>
using namespace std;
class A
{
public:
    int a;
};
class B :virtual public A
{
public :
    int b;
};
class C :virtual public A
{
public:
    int c;
};
class D :public B,public C
{
public:
    int e;
};
int main()
{
    D d;
     d.a=10;
    d.b=20;
    d.c=50;
    d.e=60;
    cout<<d.a<<endl;
    cout<<d.b<<endl;
    cout<<d.c<<endl;
    cout<<d.e<<endl;
    return 0;
}
