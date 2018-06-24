#include<iostream>
using namespace std;
int main()
{

    int *p;
    int a=5;
    p=&a;
   //*p=0x28ff98;
    cout<<"a= "<<a<<"\n";
    cout<<"&a= "<<&a<<"\n";
    cout<<"p= "<<p<<"\n";
    cout<<"*p= "<<*p<<"\n";
    cout<<"&p= "<<&p<<"\n";
    return 0;
}
