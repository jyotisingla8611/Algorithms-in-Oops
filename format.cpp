#include<iostream>
using namespace std;
int main()
{
    int item[4]={1,2,3,4};
    int cost[4]={10,30,40,50};
    cout.width(5);
    cout<<"item";
    cout.width(8);
    cout<<"cost;
    cout.width(15);
    cout<<"Total value \n";
    int sum=0;
    for(int i=0;i<4;i++)
    {
        cout.width(5);
        cout<<item[i];
        cout.width(8);
        cout<<cost[i];
        int value=item[i]*cost[i];
        cout.width(10);
        cout<<value<<"\n";
        sum=sum+value;
    }
    cout<<"\nGrand Total ";
    cout.width(3);
    cout<<sum;
}
