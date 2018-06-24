#include<iostream>
using namespace std;
//celsius to farhnehiet
class farh;
class celsius
{
    float c;
public:
    celsius(float a)
    {
        c=a;
    }
    float getc()
    {
        return c;
    }
    void show()
    {
        cout<<"celsius is = "<<c<<"\n";
    }
};
class farh
{
    float f;
public:
    farh(float b)
    {
        f=b;
    }
    farh(celsius x)
    {
        f=(x.getc() * 9/5)+32;
    }
    void show()
    {
        cout<<"Farh is = "<<f<<"\n";
    }
};
int main()
{
    int x;
    cin>>x;
    celsius p(x);
    p.show();
    farh q(p);
    q.show();
    return 0;
}
