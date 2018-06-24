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
    number operator ++(int);
    //friend number operator ++(number , int);
};
/*number operator ++ (number n , int)
{
    n.a=n.a+1;
    return n;
}*/
    number number::operator ++( int)
    {
        number t;
    t.a=t.a + 1;
    return t;
    }
int main()

{
    number t1,t2(12);
    t1=t2++;
    t1.show();
    return 0;
}
