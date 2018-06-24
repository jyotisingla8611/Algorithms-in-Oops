#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n;
double r;
cout<<"Enter value of n \n";
cin>>n;
try
{
    if(n>65876)
        throw 10;
    else if(n<0)
        throw 'E';
    else
        throw (float)1.3;
      /*r=sqrt(n);
      cout<<r;*/
}
catch(int n2)
{
    cout<<"Exception \n ";
}
catch(char a)
{
    cout<<"Number is Negative";
}
catch(float f)
{
    cout<<"Float variable ";
}
return 0;
}
