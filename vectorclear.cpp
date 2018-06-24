#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int>v;
	vector <int>::iterator it;
	int n;
	cout<<"Enter elements ";
	for(int i=0;i<5;i++)
	{
		cin>>n;
		v.push_back(n);
	}
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it;
	}
	v.clear();
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it;
	}
	if(v.empty())
	cout<<"\nTRUE";
	else
	cout<<"FALSE";
}
