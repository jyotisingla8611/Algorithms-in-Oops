#include<iostream>
using namespace std;
class array1
{
    int **arr;
    int rows,cols;
    public:
        array1()
        {
            rows=cols=0;
        }
        array1(int r,int c)
        {
            rows=r;
            cols=c;
            arr=new int *[rows];
            for(int i=0;i<rows;i++)
            {
                arr[i]=new int[cols];
            }
        }
        void getdata()
        {
            for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++)
                {
                    cin>>arr[i][j];
                }
            }
        }
            array1 operator +(array1 a)
            {
                array1 a1(rows,cols);
                for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++)
                {
                    a1.arr[i][j]=arr[i][j]+a.arr[i][j];
                }
            }
            return a1;
        }
         array1 operator -(array1 a)
            {
                array1 a1(rows,cols);
                for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++)
                {
                    a1.arr[i][j]=arr[i][j]-a.arr[i][j];
                }
            }
            return a1;
        }
        void disp()
        {
            cout<<"\n\n";
            for(int i=0;i<rows;i++){
                    cout<<endl;
                for(int j=0;j<cols;j++)
                {
                    cout<<arr[i][j]<<" ";
                }
        }
        }
        ~array1()
        {
            for(int i=0;i<rows;i++)
            {
                delete arr[i];
                delete []arr;
            }
        }
};
int main()
{
    int r,c;
    cin>>r>>c;
    array1 a(r,c),a1(r,c),a2;
    a.getdata();
    a1.getdata();
    a2=a+a1;
    a2.disp();
    a2=a-a1;
    a2.disp();
    return 0;
}
