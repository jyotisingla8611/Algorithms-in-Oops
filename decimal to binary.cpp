#include<iostream>
#include<math.h>
using namespace std;
class decimal
{
    int i;
public:
    void dec()
    {
        int rem,sum=0,j=0;
        while(i!=0)
        {
         rem=i%2;
         sum=sum+rem*pow(10,j);
         i=i/2;
         j++;
        }
        cout<<sum;
    }
    void enter()
    {
        cin>>i;
    }
};
int main()
{
    decimal d;
    d.enter();
    d.dec();
    return 0;
}
