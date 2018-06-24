#include<iostream>
using namespace std;
class test
{
    int a;
public:
    test()
    {
        a=10;
    }
    test (int n)
    {
        a=n;
    }
    friend test operator --(test t);
    void show()
    {
        cout<<"a= "<<a;
    }
};
 test operator --(test t )
{
    t.a=t.a-1;
    return t;
}
int main()
{
    test t1(10),t2;
    t2=--t1;
    t2.show();
    return 0;
}
