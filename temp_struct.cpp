#include<iostream>
#include<string.h>
using namespace std;
struct student
{
    int roll;
    float marks;
    char name[30];
};
template<class type1,class type2,class type3>
void display(type1 roll,type2 marks,type3 name)
{
    cout<<"Roll no = "<<roll<<endl;
    cout<<"Marks = "<<marks<<endl;
    cout<<"Name = "<<name<<endl;
}
template<class type>
void display(type &s)
{
   cout<<"Roll no = "<<s.roll<<endl;
    cout<<"Marks = "<<s.marks<<endl;
    cout<<"Name = "<<s.name<<endl;
}
int main()
{
    student s;
    int roll1=1422;
    float marks1=100.00;
    char name1[30];
    cin>>roll1>>marks1>>name1;
    display(roll1,marks1,name1);
    cin>>s.roll>>s.marks>>s.name;
    display(s);
    return 0;
}
