#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"class a constructor called \n";
    }
    ~A()
    {
        cout<<"class a destructor called \n";
    }
};
class D:public A
{
    public:
    D()
    {
        cout<<"class d constructor called \n";
    }
    ~D()
    {
        cout<<"class d destructor called \n";
    }
};

class B:public A
{
public:
    B()
    {
        cout<<"class b constructor called \n";
    }
    ~B()
    {
        cout<<"class b destructor called \n";
    }
};
class C:public B,public D
{
public:
    C()
    {
        cout<<"class c constructor called \n";
    }
    ~C()
    {
        cout<<"class c destructor called \n";
    }
};
int main()
{
    C c;
   // B b;
    return 0;
}
