#include<iostream>
#include<String.h>
using namespace std;
class String
{
    char st[20];
public:
    String()
    {
        strcpy(st," ");
    }
    String(char s[])
    {
        strcpy(st,s);
    }
    void read()
    {
        cin>>st;
    }
    void display()
    {
        cout<<"st = "<<st<<"\n";
    }
    int operator<(String s)
    {
        int r;
        r=strcmp(st,s.st);
        cout<<r;
        if(r<0)
            return 1;
        else
            return 0;
    }
};
int main()
{
    String s1,s2;
    s1.read();
    s2.read();
    s1.display();
    s2.display();
    if(s2<s1)
        cout<<" s2 is greater";
    else
        cout<<"s1 is greater";
    return 0;
}
