#include<iostream>
using namespace std;
const int size=5;
class xyz
{
    int a[size];
    public:
        void getdata()
        {
            for(int i=0;i<size;i++)
            {
                cin>>a[i];
            }
        }
    void putdata();
};
void xyz :: putdata()
    {
        cout<<" The required array is \n ";
            for(int i=0;i<size;i++)
            {
                cout<<a[i]<<" ";
            }
    }
int main()
{
    xyz call;
    call.getdata();
    call.putdata();
    return 0;
}
