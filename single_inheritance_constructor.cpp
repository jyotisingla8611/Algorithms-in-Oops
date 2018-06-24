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
int main()
{
    B b;
    return 0;
}
