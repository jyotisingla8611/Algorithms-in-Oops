#include<iostream>
using namespace std;
class emp
{
    static int no;
    int age;
public:
    emp()
    {
        no++;
        cout<<"no of objects : "<<no<<"\n";
    }
    ~emp()
    {
        --no;
        cout<<"no. of object exits : "<<no<<"\n";
    }

};
int emp :: no=0;
int main()
{
    emp e1,e2,e3;
    return 0;
}
