#include<iostream>
using namespace std;
int main()
{
int n1,n2;
cin>>n1>>n2;
try
{
    if(n2==0)
        throw n2;
    else
    {
        float res= (float)n1/n2;
        cout<<res;
    }
}
catch(int n2)
{
    cout<<"Division by 0 is not possible \n ";
}
return 0;
}
