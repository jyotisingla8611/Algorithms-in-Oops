#include<iostream>
using namespace std;
class array
{
    int *a;
    int n;
public:
    void getdata(int num)
    {
        cout<<"Enter the elements \n";
        n=num;
        a=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void display()
    {
        cout<<"Elements are : \n";
        for(int i=0;i<n;i++)
        {
            cout<<*(a+i)<<" ";
        }
        delete a;
        cout<<"\nMemory is releasesd \n ";
    }
};
int main()
{
    array a1;
    int siz;
    cout<<"enter size\n";
    cin>>siz;
    a1.getdata(siz);
    a1.display();
}
