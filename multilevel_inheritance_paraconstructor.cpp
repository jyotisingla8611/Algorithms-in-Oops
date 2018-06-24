#include<iostream>
using namespace std;
class Student
{
int age;
    public:
    Student(int a)
    {
        age=a;
    }
    int getage()
    {
        return age;
    }
};
class marks:public Student
{
    int m1,m2;
public:
    marks(int a,int b,int c):Student(a)
    {
        m1=c;
        m2=b;
        cout<<"age = "<<getage()<<endl;
        cout<<"marks = "<<m1<<endl;
        cout<<"marks = "<<m2<<endl;;

    }
};
class result:public marks
{
    int t;
public:
    result(int x,int y,int z):marks(x,y,z)
    {
        t=y+z;
        cout<<" total is = "<<t<<endl;
    }
};

int main()
{
    result r(5,6,7);
    return 0;
}
