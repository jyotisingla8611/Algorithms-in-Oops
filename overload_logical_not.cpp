#include<iostream>
using namespace std;
class number
{
    int a;
public:
    number()
    {
        a=0;
    }
   number (int b)
    {
        a=b;
    }
    void show()
    {
        cout<<"a= "<<a;
    }
   // void operator !();
   /* number operator !()
    {
        number x;
        x.a= !a;
        return x;
    }*/
    friend number operator !(number n);
};
    /*void number::operator !( )
    {
        a= !a;
    }*/
    number operator !(number n)
    {
        n.a= !n.a;
        return n;
    }
int main()
{
    number t1,t2(0);
     t1=!t2;
    t1.show();
    return 0;
}
