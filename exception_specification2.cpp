#include<iostream>
using namespace std;
void test(int val)throw(int)
{
    if(val==0)
        throw val;
    if(val== -1)
        throw (float)val;
    else
        throw (char)val;
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
