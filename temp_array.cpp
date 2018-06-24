#include<iostream>
#define n 5
using namespace std;
template<class type>
type sum(type a[])
{
    type sum1;
    sum1=0;
    for(int i=0;i<n;i++)
    {
        sum1=sum1+a[i];
    }
    return sum1;
}
template<class type>
void read(type a[])
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
int main()
{
    int i;
    float a2[n],j;
    cout<<"enter elements \n ";
        read<int>(a1[]);
        i=sum(a1);
        cout<<"sum = "<<i;
    cout<<"\nenter elements \n ";
        read(a2);
        j=sum(a2);
        cout<<"sum = "<<j;
        return 0;
}
