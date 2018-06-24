#include<iomanip>
#include<fstream>
#include<iostream>
#include<string.h>
#include<conio.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
	int *i,*j;
	int a[]={10,20,30,40,50,60};
	cout<<max(99,100)<<endl;
	cout<<max('a','b')<<endl;
	cout<<min(99,100)<<endl;
	cout<<min('a','b')<<endl;
	i=max_element(a,a+4);
	j=min_element(a,a+4);
	cout<<*i<<endl;
	cout<<*j<<endl;
}
