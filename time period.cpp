#include<iostream>
using namespace std;
class time
{
    int hrs,mins,secs,t3;
public:
    void enter()
    {
        cout<<"enter time \n";
        cin>>hrs>>mins>>secs;
    }
    void value(time t1,time t2)
    {
        //int t3;
        secs=t1.secs+t2.secs;
        mins=t1.mins+t2.mins;
        hrs=t1.hrs+t2.hrs;
            while(secs>60)
            {
                secs=secs-60;
                mins++;
            }
            while(mins>60)
            {
                mins=mins-60;
                hrs++;
            }
            cout<<"time is "<<hrs<<"hrs"<<mins<<"mins"<<secs<<"secs\n";
    }
    void address(time *t1,time *t2)
    {
        int t3;
        secs= t1->secs + t2->secs;
        mins= t1->mins+ t2->mins;
        hrs= t1->hrs+ t2->hrs;
            while(secs>60)
            {
                secs=secs-60;
                mins++;
            }
            while(mins>60)
            {
                mins=mins-60;
                hrs++;
            }
            cout<<"time is "<<hrs<<"hrs"<<mins<<"mins"<<secs<<"secs\n";
    }
    void refer(int x,time &t1,time &t2)
    {
        int t3;
        secs=t1.secs+t2.secs;
        mins=t1.mins+t2.mins;
        hrs=t1.hrs+t2.hrs;
            while(secs>60)
            {
                secs=secs-60;
                mins++;
            }
            while(mins>60)
            {
                mins=mins-60;
                hrs++;
            }
            cout<<"time is "<<hrs<<"hrs"<<mins<<"mins"<<secs<<"secs\n";
    }
};
int main()
{
    int x=0;
    time t1,t2,t3,t4,t5;
    t1.enter();
    t2.enter();
    t3.value(t1,t2);
    t4.address(&t1,&t2);
    t5.refer(x,t1,t2);
    return 0;
}
