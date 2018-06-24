#include<iostream>
using namespace std;
class swap1
{
    int a,b;
public:
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
void reference1(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"a = "<<a<<" "<<"b = "<<b<<"\n\n";
}
};
int main()
{
    int a=2,b=3,c=4,d=5;
    swap1 s;
    s.call(1,2);
    s.address(&a,&b);
    s.reference1(c,d);
    return 0;
}
