#include<iostream>
using namespace std;
class factorial
{
    int i;
public:
    void fact()
    {
        int j,fac=1;
        for(j=1;j<=i;j++)
        {
            fac=fac*j;
        }
        cout<<" factorial is = "<<fac;
    }
    void enter()
    {
        cin>>i;
    }
};
int main()
{
    factorial f;
    f.enter();
    f.fact();
    return 0;
}
