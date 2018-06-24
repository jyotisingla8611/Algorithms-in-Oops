#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
public:
    void getdata()
    {
        cout<<"enter real and imaginary part \n ";
        cin>>real>>img;
    }
    complex operator -(complex c2)
    {
        complex x;
        x.real=real-c2.real;
        x.img =img-c2.img;
        return x;
    }
    void putdata(complex x)
    {
        cout<<x.real<<"+"<<"i"<<x.img<<"\n";
    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1-c2;
    c3.putdata(c3);
    return 0;
}
