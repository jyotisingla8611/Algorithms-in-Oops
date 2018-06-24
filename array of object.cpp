#include<iostream>
using namespace std;
const int size=5;
class xyz
{
    int a;
    public:
        void getdata()
        {
          cin>>a;
        }
    void putdata();
};
void xyz :: putdata()
    {
         cout<<a<<" ";
    }
int main()
{
    xyz call[size];
    for(int i=0;i<size;i++)
    {
       call[i].getdata();
    }
    for(int i=0;i<size;i++)
    {
     call[i].putdata();
    }
    return 0;
}
