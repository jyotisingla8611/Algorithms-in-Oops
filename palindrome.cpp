#include<iostream>
using namespace std;
class palindrome
{
    int i;
public:
    void pal()
    {
        int j,rem,sum=0;
        j=i;
        while(i!=0)
        {
            rem=i%10;
            sum=sum*10+rem;
            i=i/10;
        }
        if(sum==j)
        {
            cout<<"palindrome";
        }
        else
        {
            cout<<"not palindrome";
        }
    }
    void enter()
    {
        cin>>i;
    }
};
int main()
{
    palindrome f;
    f.enter();
    f.pal();
    return 0;
}
