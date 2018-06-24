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
   void add(array1 a1)
    {
        type a2[size1];
        for(int i=0;i<size1;i++)
        {
            a2[i]=a1.a[i]+a[i];
        }
        cout<<"SUM IS AS : \n ";
        for(int i=0;i<size1;i++)
        {
            cout<<a2[i]<<" ";
        }
    }
    void sub(array1 a1)
    {
        for(int i=0;i<size1;i++)
        {
            a[i]=a1.a[i]-a[i];
        }
        cout<<"SUB IS AS : \n ";
        for(int i=0;i<size1;i++)
        {
            cout<<a[i]<<" ";
        }
    }
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
    array1<int>b(5);
    cout<<"enter elements of a \n";
    a.read();
    cout<<" entered elements of a are \n ";
    a.print();
    cout<<"\nenter elements of b \n";
    b.read();
    cout<<"\n entered elements of b are \n ";
    b.print();
    a.add(b);
    a.sub(b);
    array1<float>a1(5);
    array1<float>b1(5);
    cout<<"enter elements \n";
    a1.read();
    cout<<"entered elements are \n ";
    a1.print();
    cout<<"\nenter elements of b1 \n";
    b1.read();
    cout<<"\n entered elements of b1 are \n ";
    b1.print();
    a1.add(b1);
    a1.sub(b1);
    array1<char>a2(5);
    array1<char>b2(5);
    cout<<"enter elements \n";
    a2.read();
    cout<<"entered elements are \n ";
    a2.print();
    cout<<"\nenter elements of b2 \n";
    b2.read();
    cout<<"\n entered elements of b2 are \n ";
    b2.print();
    a2.add(b2);
    a2.sub(b2);
    return 0;
}
