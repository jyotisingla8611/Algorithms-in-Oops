#include<iostream>
using namespace std;
template<class type>
void display(type t)
{
    cout<<"A = "<<t<<endl;
}
template <class t,class t1>
void display(t b,t1 c)
{
   cout<<"B = "<<b<<endl;
   cout<<"C = "<<c<<endl;
}
void display(float d)
{
    cout<<"D = "<<d<<endl;
}
int main()
{
    display(30);
    display(30.5,60.5);
    display(3.4);
    display('A');
    display("ABC",123);
       return 0;
}

