#include<iostream>
using namespace std;
int main()
{
    int i=10,*j,**k;
    j=&i;
    k=&j;
    cout<<"i = "<<i<<"\n";
    cout<<"j = "<<*j<<"\n";
    cout<<"k = "<<**k<<"\n";
    cout<<"&i = "<<&i<<"\n";
    cout<<"j = "<<j<<"\n";
    cout<<"&j = "<<&j<<"\n";
    cout<<"k = "<<k<<"\n";
    return 0;
}
