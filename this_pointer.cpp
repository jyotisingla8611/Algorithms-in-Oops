#include<iostream>
#include<string.h>
using namespace std;
class rec
{
    int le,br;
public:
    void getdata(int l,int b)
    {
        le=l;
        this->br=b;
    }
    void display()
    {
        cout<<le<<" "<<br;
    }
};
int main()
{
    rec r;
    r.getdata(20,30);
    r.display();
    return 0;
}
