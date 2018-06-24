#include<iostream>
using namespace std;
class rectangle
{
    int length;
    int breadth;
public:
    void read(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void display()
    {
        cout<<length<<" "<<breadth;
    }
};
int main()
{
    rectangle r,*p;
    p=&r;
    (*p).read(10,20);
    p->display();
}
