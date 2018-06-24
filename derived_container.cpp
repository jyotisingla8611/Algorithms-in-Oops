#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    s.push(5);
    s.push(10);
    s.push(30);
    cout<<"Top = "<<s.top()<<endl;
    cout<<"Size = "<<s.size()<<endl;
    s.pop();
    cout<<s.empty()<<endl;
    cout<<"Top = "<<s.top()<<endl;
}
