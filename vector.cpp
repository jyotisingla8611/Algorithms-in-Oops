#include<iostream>
#include<vector>
using namespace std;
void display(vector <int>&v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}cout<<"\n";
}
int main()
{
	vector <int>v;
	cout<<"Initial size= "<<v.size()<<endl;
	int n;
	cout<<"Enter elements ";
	for(int i=0;i<5;i++)
	{
		cin>>n;
		v.push_back(n);
	}
	cout<<"Size after adding 5 values ="<<v.size()<<endl;
	display(v);
	vector <int>::iterator it=v.begin();
	it=it+3;
	v.insert(it,2,9);
	display(v);
}
