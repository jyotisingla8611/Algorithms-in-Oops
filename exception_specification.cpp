#include<iostream>
using namespace std;
void test(int val)throw(int,char)
{
    if(val==0)
        throw 'a';
    if(val==1)
        throw 0;
}
int main()
{
    int n;
    cin>>n;
    try
    {
        test(n);
    }
    catch(int)
    {
        cout<<"INT TYPE EXCEPTION\n";
    }
    catch(char)
    {
        cout<<"CHAR TYPE EXCEPTION\n";
    }
    catch(float)
    {
        cout<<"FLOAT TYPE EXCEPTION \n";
    }
    return 0;
}
