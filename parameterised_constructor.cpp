#include<iostream>
using namespace std;
class A
{
 int a;
 int c;
 public:
 A(int i,int j)
 {
  a=i;
  c=j;
  cout<<"A";
 }
 void show()
 {
  cout<<"a= "<<a<<"c= "<<c;
 }
};
class B : public A
{
 float b;
 float d;
 public:
 B(int x,int y,float z,float t):A(x,y)
 {
  b=z;
  d=t;
 }
 void display()
 {
  cout<<"b= "<<b<<"d= "<<d;
 }
};
int main()
{
 B b(10,20,30.6,79.9);
b.show();
b.display();
return 0;
}

