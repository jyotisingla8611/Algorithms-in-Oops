#include<iostream>
using namespace std;
template<class type>
type square(type t)
{
    return (t*t);
}
int main()
{
    //int n1=5;
    cout<<"square of n1 is = "<<square<int>(5)<<endl;
    float n2=5.4;
    cout<<"square of n2 is = "<<square(n2)<<endl;
    double n3=123.567;
    cout<<"square of n3 is = "<<square<double>(n3)<<endl;
    return 0;
}

