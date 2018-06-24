#include<iostream>
#include<math.h>
using namespace std;
class complex
{
    float real;
    float img;
public:
    void getdata()
    {
        cout<<"enter real and imaginary part \n ";
        cin>>real>>img;
    }
    complex operator /(complex c2)
    {
        float x;
        complex c;
        x=pow(c2.real,2)+pow(c2.img,2);
        cout<<x<<"\n";
        c.real=(((real * c2.real)+(img * c2.img))/x);
        c.img=(((c2.real * img)-(c2.img * real))/x);
        return c;
    }
    void putdata(complex x)
    {
        if(x.img>0)
        cout<<x.real<<"+"<<"i"<<x.img<<"\n";
        else
        cout<<x.real<<"i"<<x.img<<"\n";
    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1/c2;
    c3.putdata(c3);
    return 0;
}
