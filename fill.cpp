#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector <int>v1(10);
	int n,i,c;
//	vector<int>::iterator it;
	fill(v1.begin()+2,v1.end()-1,4);
	for(i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
}

