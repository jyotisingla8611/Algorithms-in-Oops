#include<iostream>
using namespace std;
template<class type>
class array1
{
    type *a;
    int size1;
public:
    array1(int n)
    {
        a=new type[n];
        size1=n;
    }
    void read()
    {
        for(int i=0;i<size1;i++)
            cin>>a[i];
    }
    void print();
};
template<class type>
void array1<type>::print()
{
 for(int i=0;i<size1;i++)
            cout<<a[i];
}
int main()
{
    array1<int>a(5);
    cout<<"enter elements \n";
    a.read();
    cout<<"\nentered elements are \n ";
    a.print();
    array1<float>a1(5);
    cout<<"\nenter elements \n";
    a1.read();
    cout<<"\nentered elements are \n ";
    a1.print();
    array1<char>a2(5);
    cout<<"\nenter elements \n";
    a2.read();
    cout<<"\nentered elements are \n ";
    a2.print();
    return 0;
}
