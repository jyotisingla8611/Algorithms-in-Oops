#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isodd(int i)
{
    return((i%2)==1);
}
int main()
{
    int c,n;
   vector<int>v;
    vector<int>::iterator it;
    for(int i=0;i<10;i++)
   {
       cin>>n;
       v.push_back(n);
   }
    for(it=v.begin();it!=v.end();it++)
    cout<<*it;
   for(int i=0;i<10;i++)
   {
        c=count_if(v.begin(),v.end(),isodd);
   }
     cout<<"Vector contains"<<c<<"Odd values";
}
