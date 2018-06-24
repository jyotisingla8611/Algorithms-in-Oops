#include<iostream>
using namespace std;
class test
{
    int a,b;
public:
    friend void add(test,test);
    void setdata()
    {
        cin>>a;
    }
};
void add(test x,test y)
{
    cout<<"Sum is = "<<x.a+y.a;
}
int main()
{
    void(test::*fptr)();
    fptr=&test::setdata;
    test t,t1;
    (t.*fptr)();
    (t1.*fptr)();
    add(t,t1);
    return 0;
}
