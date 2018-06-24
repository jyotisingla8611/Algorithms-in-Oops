#include<fstream>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    char data[100];
    ofstream obj;
    obj.open("file.txt",ios::out);
    if(!obj)
    {
        cout<<"NO FILE EXIST \n ";
    }
    else
    {
        cout<<"Write data to file \n ";
        cout<<"Enter name \n";
        cin.getline(data,100);
        obj<<data<<endl;
        cout<<"Enter age \n";
        cin>>data;
        cin.ignore();
        obj<<data<<endl;
        obj.close();
        ifstream obj1;
        obj1.open("file.txt",ios::in);
        cout<<"Reading Data"<<endl;
        obj1>>data;
        cout<<data<<endl;
        obj1>>data;
        cout<<data<<endl;
        obj1.close();
    }
        return 0;
}
