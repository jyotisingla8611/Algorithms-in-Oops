#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isodd(int i)
{
	return ((i%2)==1);
}
int main()
{
	vector <int>v;
	int n,i,c;
	vector<int>::iterator it;
	for(i=0;i<10;i++)
	{
		cin>>n;
		v.push_back(n);
	}
	for(i=0;i<10;i++)
	{
		c=count_if(v.begin(),v.end(),isodd);
	}
	cout<<c<<endl;
}
