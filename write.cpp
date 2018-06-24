#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char *s1="c++";
    char *s2="Programming";
    int m=strlen(s1);
    int n=strlen(s2);
    for(int i=0;i<n;i++)
    {
        cout.write(s2,i);
        cout<<"\n";
    }
    for(int i=n;i>0;i--)
    {
        cout.write(s2,i);
        cout<<"\n";
    }
    cout.write(s1,m).write(s2,n);
    cout<<"\n";
    cout.write(s1,10);
}
