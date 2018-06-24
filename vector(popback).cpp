#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int>v;
	vector <int>::iterator it1;
		int n;
	cout<<"Enter elements ";
	for(int i=0;i<5;i++)
	{
		cin>>n;
		v.push_back(n);
	}
		v.pop_back();  // last element will delete
	for(it1=v.begin();it1!=v.end();it1++)
	{
		cout<<*it1<<" ";
	}
}
