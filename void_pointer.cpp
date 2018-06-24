#include<iostream>
using namespace std;
int main()
{
    static int p;
    //void *p;
   // cout<<*p<<"\n";//ERROR OCCURED HERE
   cout<<sizeof(p);
    return 0;
}
