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
class C
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

class B:public A,public C
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

int main()
{
    B b;
    return 0;
}
