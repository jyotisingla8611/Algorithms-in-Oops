#include<iostream>
using namespace std;
class emp
{
    const int id;
    int age;
public:
    emp(int a):id(a)
    {

    }
    void display()
    {
        cout<<"value of id is : "<<id<<"\n";
    }
};
int main()
{
    emp e1(10);
    e1.display();
    return 0;
}
