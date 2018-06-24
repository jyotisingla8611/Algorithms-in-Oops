#include<iostream>
#define n 5
using namespace std;
template<class type>
type sort1(type a[])
{
    type x;
    for(int j=0;j<n;j++)
    {
       for(int i=0;i<n-1;i++)
      {
        if(a[i]>a[i+1])
        {
           x=a[i];
           a[i]=a[i+1];
           a[i+1]=x;
        }
      }
    }
    return *a;
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
    int a[n];
    float a1[n];
    char a2[n];
    cout<<"Enter Elements For Int \n ";
    read(a);
    sort1(a);
    cout<<"After Sorting \n ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nEnter Elements For Float \n ";
    read(a1);
    sort1(a1);
    cout<<"After Sorting  \n ";
    for(int i=0;i<n;i++)
    {
        cout<<a1[i]<<" ";
    }
    cout<<"\nEnter Elements For Char\n ";
    read(a2);
    sort1(a2);
    cout<<"After Sorting \n ";
    for(int i=0;i<n;i++)
    {
        cout<<a2[i]<<" ";
    }
        return 0;
}
