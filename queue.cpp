#include<iomanip>
#include<fstream>
#include<iostream>
#include<string.h>
#include<conio.h>
#include<stack>
#include<queue>
using namespace std;
int main(){
	queue<string>s;
//	queue<string>::iterator it;
     s.push(" one ");
	s.front();
    s.push(" two ");
	s.back();
    s.push(" three ");
	s.front();
	s.push(" four ");
	s.front();
	s.push(" five ");
	s.back();
	s.pop();
	while(!s.empty())
    {
        cout<<s.front()<< " ";
        s.pop();
    }
}
