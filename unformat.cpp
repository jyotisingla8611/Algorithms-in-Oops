#include<iostream>
using namespace std;
int main()
{
    int count=0;
    char ch;
    cout<<"Enter a char \n ";
    cin.get(ch);
    while(ch!='\n')
    {
        cout.put(ch);
        count++;
        cin.get(ch);
    }
    cout<<"\ncount = "<<count<<endl;
}
