#include<iostream>
using namespace std;
class base
{
public:
    virtual void display()
    {
        cout<<"display function of base class is called";
    }
};
class derived:public base
{
public:
    void display()
    {
        //base::display();
        //cout<<endl;
        cout<<"derived class function is called \n";
    }
};
int main()
{
    base *bptr;
    derived d;
    bptr=&d;
    bptr->display();
    bptr->base::display();
    cout<<endl;

    (*bptr).base::display();
    return 0;
}
