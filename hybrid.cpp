#include<iostream>
using namespace std;
class Person
{
    int age;
    long long int phone_no;
    char name[100];
    public:
    void getdata()
    {
        cout<<"Enter name phone_no age \n";
        cin.getline(name,100);
        cin>>phone_no>>age;
    }
    void putdata()
    {
        cout<<name<<"\n"<<phone_no<<"\n"<<age<<"\n";
    }
};
class student: virtual public Person
{
    int roll_no;
    char sname[100],course[100];
    public:
    void getdata()
    {
        cin.ignore();
        cout<<"Enter sname roll_no course \n";
        cin.getline(sname,100);
        cin>>roll_no;
        cin.ignore();
        cin.getline(course,100);
    }
    void putdata()
    {
        cout<<sname<<"\n"<<roll_no<<"\n"<<course<<"\n";
    }
};

class Teacher:virtual public Person
{
    char dept[100];
    char qual[100];
    public:
    void getdata()
    {
        cout<<"Enter qualification and dept \n";
        cin.getline(qual,100);
        cin.ignore();
        cin.getline(dept,100);
    }
    void putdata()
    {
        cout<<qual<<"\n"<<dept<<"\n";
    }
};
class Result:public Teacher,public student
{
    int m1,m2,m3,total;
    public:
    void getdata()
    {
        cout<<"Enter marks in 3 subjects \n";
       cin>>m1>>m2>>m3;
    }
    void putdata()
    {
        cout<<m1<<"\n"<<m2<<"\n"<<m3<<"\n";
        total=m1+m2+m3;
        cout<<"total = "<<total<<"\n";
    }
};
int main()
{
    Result r;
   r.Person::getdata();
    r.student::getdata();
    r.Teacher::getdata();
    //r.getdata();
    //r.Person::putdata();
    r.student::putdata();
    r.Teacher::putdata();
   // r.putdata();
    return 0;
}
