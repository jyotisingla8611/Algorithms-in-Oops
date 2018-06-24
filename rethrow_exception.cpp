#include<iostream>
using namespace std;
void fuction()
{
    try
    {
        throw (float)10.2;
    }
    catch(float i)
    {
        cout<<"INiDE FUNCTION \n ";
        throw ;  //or throw(float)12.3;
    }
}
int main()
{
    cout<<"IN M AIN FUNCTION \n" ;
    try
    {
        fuction();
    }
    catch(float i)
    {
        cout<<"RETHROW FLOAT EXCEPTION IN MAIN \n";
    }
    catch(int i)
    {
        cout<<"RETHROW EXCEPTION IN MAIN \n";
    }

    return 0;
}
