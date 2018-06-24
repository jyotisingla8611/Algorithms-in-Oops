#include<iostream>
using namespace std;
template<class type1,class type2,class type3>
class employee
{
    type1 eid;
    type2 desig;
    type3 sal;
public:
    void setdata(type1 e,type2 d,type3 s)
{

     eid=e;
     desig=d;
     sal=s;
     }
     void display()
     {
         cout<<eid<<endl;
         cout<<desig<<endl;
         cout<<sal<<endl;
     }
};
int main()
{
    int eid1=12;
    char desig1[50]="manager";
    float sal1=100;
    employee<int,char*,float>e;
    e.setdata(eid1,desig1,sal1);
    e.display();
}

