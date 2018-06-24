#include<iostream>
using namespace std;
class xyz
{
    int a;
    int b;
public:
    void getdata()
    {
        cout<<"enter a \n";
        cin>>a;
        cout<<"enter b \n";
        cin>>b;
    }
    void swap(int,int)
    {
        int c;
        c=a;
        a=b;
        b=c;
    }
    void putdata()
    {
        swap(a,b);
        cout<<"after swap \n";
        cout<<"a= " <<a<<" " <<"b= " <<b;
    }
};
int main()
{
    xyz call;
    call.getdata();
    call.putdata();
    return 0;
}
