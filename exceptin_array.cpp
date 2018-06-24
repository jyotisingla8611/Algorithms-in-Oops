#include<iostream>
using namespace std;
void enter(int size2,int *a1)
{
    for(int i=0;i<size2;i++)
            cin>>a1[i];
        for(int i=0;i<size2;i++)
            cout<<a1[i]<<" ";
}
void test(int size2)
{
    if(size2>10)
        throw 10;
    if(size2<10)
    {
        throw (float)size2;
    }
    else
    {
           throw (char)size2;
    }
}
int main()
{
    int a[10],size1;
    cin>>size1;
    try
    {
        test(size1);

    }
    catch(int)
    {
        cout<<"ARRAY OUT OF BOUND\n";
    }
    catch(char)
    {
        cout<<" ARRAY IS POSSIBLE\n";
    }
    catch(float)
    {
        cout<<"U CAN ENTER MORE ELEMENTS \n";
    }
if(size1<=10)
{
    enter(size1,a);
}
    return 0;
}
