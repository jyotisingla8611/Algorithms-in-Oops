#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int>v;
	vector <int>::iterator it1;
	vector <int>::iterator it2;
	int n;

	cout<<"Enter elements ";
	for(int i=0;i<5;i++)
	{
		cin>>n;
		v.push_back(n);
	}
		it1=v.begin();
	it2=it1+3;// value of it2 is 0+3=3
	v.erase(it1,it2);     // element will erase from  1 ,2,3
	for(it1=v.begin();it1!=v.end();it1++)
	{
		cout<<*it1<<" ";
	}
}
