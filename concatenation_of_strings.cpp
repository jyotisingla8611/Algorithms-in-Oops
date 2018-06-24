#include<iostream>
#include<string.h>
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
        cin.getline(st,20);
    }
    void display()
    {
        cout<<"st = "<<st<<"\n";
    }
    String operator+(String s)
    {
        strcat(st,s.st);
        return st;
    }
};
int main()
{
    String s1,s2,s3;
    s1.read();
    s2.read();
    s1.display();
    s2.display();
    s3=s1+s2;
    s3.display();
    return 0;
}
