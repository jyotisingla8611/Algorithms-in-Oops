#include<iostream>
#include<list>
using namespace std;
int main()
{
	list <int>v;
	list <int>::iterator it1;
		int n;
	cout<<"Enter elements ";
	for(int i=0;i<5;i++)
	{
		cin>>n;
		v.push_front(n);
	}
		v.pop_back();  // last element will delete
	for(it1=v.begin();it1!=v.end();it1++)
	{
		cout<<*it1<<" ";
	}
}
/*
push_front()
pop_front()
empty()
pop_back()
push_back()
size()
front() used to access front element
*/
