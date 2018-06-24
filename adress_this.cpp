#include<iostream>
#include<string.h>
using namespace std;
class rec
{
    int l,b;
public:
    void getdata(int i,int j)
    {
        cout<<"\naddress of calling object \n"<<this<<"\n";
        this->l=i;
        this->b=j;
    }
    void display()
    {
        cout<<"\naddress of calling object \n"<<this<<"\n";
        cout<<l<<" "<<b<<"\n";
    }
    void area()
    {
        cout<<"\nArea is = "<<this->l * this->b<<"\n";
    }
};
int main()
{
    rec r;
    r.getdata(20,30);
    r.display();
    r.area();
    r.display();
    return 0;
}
