#include<iostream>
using namespace std;
class complex
{
    int real,imgs;
public:
    void getdata()
    {
        cout<<"getdata time \n";
        cin>>real>>imgs;
    }
    void add(complex c1,complex c2)
    {

        real=c1.real+c2.real;
        imgs=c1.imgs+c2.imgs;
    }
    void display()
    {
        cout<<real<<"+"<<"i"<<imgs;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3.add(c1,c2);
    c3.display();
    return 0;
}
