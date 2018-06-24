#include<iostream>
using namespace std;
void call(int a,int b);
void address(int *a,int *b);
void reference(int &a,int &b);
int main()
{
    int x,y,p,q;
    cout<<"enter value of x and y and p and q\n\n ";
    cin>>x>>y>>p>>q;
    cout<<"swap by call\n\n";
    call(x,y);
    cout<<"x = "<<x<<" "<<"y = "<<y<<"\n\n";
    cout<<"swap by address \n\n";
    address(&x,&y);
    cout<<"x = "<<x<<" "<<"y = "<<y<<"\n\n";
    cout<<"swap by reference \n \n";
    reference(p,q);
    cout<<"p = "<<p<<" "<<"q = "<<q<<"\n\n";
    return 0;
}
void call(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"a = "<<a<<" "<<"b = "<<b<<"\n\n";
}
void address(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    cout<<"a = "<<*a<<" "<<"b = "<<*b<<"\n\n";
}
void reference(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"a = "<<a<<" "<<"b = "<<b<<"\n\n";
}
