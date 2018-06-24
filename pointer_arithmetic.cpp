#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    int *p,*p1;
    p=&a;
    p1=&b;
    cout<<"Sum = "<<p+p1<<"\n";
    cout<<"Sub = "<<p-p1<<"\n";
    cout<<"Mul = "<<*p**p1<<"\n";
    cout<<"Div = "<<*p / *p1<<"\n";
    return 0;
}
