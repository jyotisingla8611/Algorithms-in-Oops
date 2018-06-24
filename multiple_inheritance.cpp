#include<iostream>
using namespace std;
class M
{
protected:
    int m;
public:
    void get_m(int);
};
class N
{
protected:
    int n;
public:
    void get_n(int);
};
class P:public M,public N
{
public:
    void disp();
};
void M::get_m(int a)
{
    m=a;
}
void N::get_n(int b)
{
    n=b;
}
void P::disp()
{
    cout<<"m = "<<m<<endl;
    cout<<"n = "<<n<<endl;
    cout<<"m*n = "<<m*n<<endl;
}
int main()
{
    P p;
    p.get_m(20);
    p.get_n(30);
    p.disp();
    return 0;
}
