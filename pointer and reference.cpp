#include<iostream>
using namespace std;
struct A
{
    int a;
};
int main()
{
    int x=5;
    int y=6;
    int *p;
    A d;
    p=&x;
    p=&y;
    int &r=x;
    //int &r=y;
    p++;
    r++;
    p=NULL;
 //&r=NULL;
    cout<<&p<<" "<<&x<<" ";
    cout<<&r<<" "<<&x<<" ";
    A *c=&d;
    A &b=d;
//    c.a=5;
    c->a=5;
    b.a=10;
//    b->a=10;
    cout<<p<<" ";
    cout<<r;
    return 0;
}
