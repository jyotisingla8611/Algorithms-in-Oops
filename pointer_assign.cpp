#include<iostream>
using namespace std;
int main()
{

    int *p;
    int a=10,b=20;
    p=&a;
    cout<<"a= "<<a<<"\n";
    *p=40;
    cout<<"a= "<<a<<"\n";
    b=*p;
    cout<<"b= "<<b<<"\n";
    cout<<"a= "<<*(&a)<<"\n";
    return 0;
}
