#include<iostream>
using namespace std;
template<class type>
type great(type t,type t1)
{
    if(t>t1)
        return t;
    else
        return t1;
}
int main()
{
    int a=5,e=9;
    float b=9.9,f=11.87;
    double c=768.987,g=76849.6453;
    char d='A',h='a';
    cout<<"greater is = "<<great(a,e)<<endl;
     cout<<"greater is = "<<great(b,f)<<endl;
      cout<<"greater is = "<<great(c,g)<<endl;
       cout<<"greater is = "<<great(d,h)<<endl;
    return 0;
}
