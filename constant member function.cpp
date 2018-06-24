#include<iostream>
using namespace std;
class emp
{
    int age;
public:
    int id;
    void function()const
    {
       id=0;
    }
    void display()
    {
        cout<<"value of id is : "<<id<<"\n";
    }
};
int main()
{
    const emp e1;
    e1.id=5;
    e1.display();
    return 0;
}
