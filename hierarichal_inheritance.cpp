#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
protected:
    int roll_no;
    char name[20];
public:
    void getstudentdetails()
    {
        cout<<"enter roll no ";
        cin>>roll_no;
        fflush(stdin);
        cout<<"enter name ";
        cin.getline(name,20);
    }
};
class academic:public student
{
protected:
    int marks;
    char grade;
public:
    void getdetails()
    {
        getstudentdetails();
        cout<<"enter marks";
        cin>>marks;
        cout<<"enter grade ";
        cin>>grade;
    }
    void showdetails()
    {
        cout<<"rollno="<<roll_no<<endl;
        cout<<"name = "<<name<<endl;
          cout<<"marks="<<marks<<endl;
        cout<<"grade = "<<grade<<endl;
    }
};
class account:public student
{
protected:
    float fee;
    char dues;
public:
    void getaccountdetails()
    {
        getstudentdetails();
        cout<<"enter fee";
        cin>>fee;
        cout<<"is there any due (y/n) ?";
        cin>>dues;
    }
    void show_account_details()
    {
        cout<<"rollno="<<roll_no<<endl;
        cout<<"name = "<<name<<endl;
        cout<<"fee="<<fee<<endl;
        cout<<"dues = "<<dues<<endl;
    }
};
int main()
{
    account A;
    A.getaccountdetails();
    A.show_account_details();
    academic B;
    B.getdetails();
    B.showdetails();
    return 0;
}


