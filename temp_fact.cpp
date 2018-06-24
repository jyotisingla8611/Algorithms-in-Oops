#include<iostream>
using namespace std;
template<class type>
type fact(type t)
{
    if(t==1)
        return 1;
    else
        return (t*fact(t-1));
}
int main()
{
    int a;
    cin>>a;
    cout<<"Factorial is = "<<fact(a)<<endl;
    long long int b;
    cin>>b;
    cout<<"Factorial is = "<<fact
    (b)<<endl;
    return 0;
}
