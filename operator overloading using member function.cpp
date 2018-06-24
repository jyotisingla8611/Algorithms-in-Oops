#include<iostream>
using namespace std;
class test
{
    int a;
public:
    test():a(0)
    {

    }
    test operator -()
    {
        test x;
        x.a=-a;
        return x;

    }
    test (int t)
    {
        a=t;
    }
    void show()
    {
        cout<<"a= "<<a;
    }
};
int main()
{
    test t(18),t2;
    t2= -t;
    t2.show();
    return 0;
}
