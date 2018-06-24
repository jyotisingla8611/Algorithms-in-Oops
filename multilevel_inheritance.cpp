#include<iostream>
using namespace std;
class student
{
protected:
    int roll_no;
public:
    void get_no(int a)
    {
        roll_no=a;
    }
    void putno()
    {
     cout<<"Rollno = "<<roll_no;
    }
};
class test:public student
{
protected:
    float sub1,sub2;
public:
    void get_marks(float x,float y)
    {
        sub1=x;
        sub2=y;
    }
    void putdata()
    {
        cout<<"sub1 ="<<sub1<<endl;
        cout<<"sub2 = "<<sub2<<endl;
    }
};
class result:public test
{
    float total;
public:
    void disp()
    {
        total=sub1+sub2;
        cout<<"roll no = "<<roll_no<<endl;
        putdata();
        cout<<"total marks = "<<total<<endl;
    }
};
int main()
{
    result r;
    r.get_no(20);
    r.get_marks(60.5,70.9);
    r.disp();
    return 0;
}


