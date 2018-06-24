#include<iostream>
using namespace std;
void divide(int a,int b)
{
    if(b==0)
        throw b;
    else
        cout<<a/b;
}
int main()
{
int n1,n2;
cin>>n1>>n2;
try
{
    divide(n1,n2);
}
catch(int n2)
{
    cout<<"Division by 0 is not possible \n ";
}
return 0;
}

