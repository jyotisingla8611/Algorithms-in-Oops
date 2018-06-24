#include<iostream>
using namespace std;
class fibo
{
	int n,i,a,b,c;
	public:
		fibo()
		{
			a=0;
			b=1;
		}
	void input();
	void output();
};
void fibo::input()
{
	cout<<"Enter a no.";
	cin>>n;
}
void fibo::output()
{
    if(n==1)
        cout<<a;
    else
    cout<<a<<" "<<b<<" ";
	for(i=2; i<n; i++)
	{
	c=a+b;
	cout<<c<<" ";
	a=b;
	b=c;
    }
}
int main()
{
	fibo z;
	z.input();
	z.output();
}
