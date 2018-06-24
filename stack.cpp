#include<iomanip>
#include<fstream>
#include<iostream>
#include<string.h>
#include<conio.h>
#include<stack>
using namespace std;
int main(){
	stack<int>s;
	s.push(5);
	s.push(10);
	s.push(30);
	cout<<"top ="<<s.top()<<endl;
	cout<<"size = "<<s.size()<<endl;
	s.pop();
	cout<<"size = "<<s.size()<<endl;
	cout<<"top ="<<s.top()<<endl;
	if(s.empty())
		cout<<"true  "<<endl;
		else 
		cout<<"false  "<<endl;
}
