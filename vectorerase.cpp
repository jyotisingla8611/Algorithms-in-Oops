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
	it=v.begin();
v.erase(it);        // first element will erase
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
}
