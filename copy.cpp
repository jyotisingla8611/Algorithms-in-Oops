#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector <int>v1;
	vector <int>v2(5);
	int n,i,c;
	vector<int>::iterator it;
	for(i=0;i<10;i++)
	{
		cin>>n;
		v1.push_back(n);
	}
	copy(v1.begin(),v1.begin()+3,v2.begin());
	for(i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}
}

