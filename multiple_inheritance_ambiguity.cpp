#include<iostream>
using namespace std;
class B1
{
public:
    void show()
    {
     cout<<"in class b1"<<endl;
    }
};
class B2
{
public:
    void show()
    {
        cout<<"in class b2"<<endl;
    }
};
class P:public B1,public B2
{
public:
    void disp()
    {
        cout<<"in derived class D"<<endl;
    }
};
int main()
{
    P p;
    p.disp();
    //p.show();
    p.B1::show();
    p.B2::show();
    return 0;
}


