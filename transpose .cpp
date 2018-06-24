#include<iostream>
using namespace std;
class transpose
{
    int a[10][10];
    public:
    void getdata()
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }
   friend transpose trans(transpose x)
    {
        transpose y;
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                y.a[j][i]=x.a[i][j];
            }
        }
        return y;
    }
    void display(transpose t)
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            cout<<"\n";
            for(j=0;j<3;j++)
            {
                cout<<t.a[i][j]<<" ";
            }
        }
    }
};
int main()
{
    transpose t1,t2,t3;
    t1.getdata();
    t2=trans(t1);
    t3.display(t2);
    return 0;
}
