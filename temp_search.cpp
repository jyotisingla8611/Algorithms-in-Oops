#include<iostream>
#define n 5
using namespace std;
template<class type>
void search1(type a[],type x)
{
    int flag=0,i;
    for( i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
    {
        cout<<"FOUND AT LOCATION "<<i<<endl;
    }
    else
    {
        cout<<"ELEMENT NOT FOUND";
    }

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
    int a1[n],i,k;
    float a2[n],j,l;
    char a3[n],m,n1;
    cout<<"enter elements \n ";
        read(a1);
    cin>>i;
    search1(a1,i);
    cout<<"\nenter elements \n ";
        read(a2);
        cin>>j;
    search1(a2,j);
    cout<<"\n enter chars \n";
        read(a3);
        cin>>m;
    search1(a3,m);
        return 0;
}
