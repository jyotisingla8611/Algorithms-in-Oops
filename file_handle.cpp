#include<fstream>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    fstream st;
    st.open("file1.txt",ios::in);
    if(!st)
    {
      cout<<"Creation Failed \n";
      //exit(1);
    }
   /* else
    {
        cout<<"File created \n";
        st<<"C++ Program";
        st.close();
    }*/
    else
    {
        char ch;
        while(!st.eof())
        {
            st>>ch;
            cout<<ch<<endl;
        }
        st.close();
    }
        return 0;
}
