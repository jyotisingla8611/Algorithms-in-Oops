#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int *p;
    p=a;
    cout<<"Enter array elements \n";
    for(int i=0;i<5;i++)
    {
        cin>>*(p+i);
    }
    cout<<"Array elements are : \n";
    for(int i=0;i<5;i++)
    {
      cout<<"a = "<<*(p+i)<<"\n";
      //cout<<"a = "<<*(a+i)<<"\n";
      //cout<<"a = "<<*(&a[0]+i)<<"\n";
    }

    return 0;
}
