#include<iostream>
#include<string.h>
using namespace std;
class city
{
public:
    char *name;
    int length;
    city()
    {
        length=0;
        name=new char[length+1];
    }
    void getname()
    {
        char *s;
        s=new char[30];
        cout<<"enter city \n";
        cin>>s;
        length=strlen(s);
        name=new char[length+1];
        strcpy(name,s);
    }
    void printname()
    {
        cout<<name<<"\n";
    }
};
int main()
{
    city *cptr[10];
    int n=1;
    int opt;
    do{
        cptr[n]=new city;
        cptr[n]->getname();
        n++;
            cout<<"Do u want to enter name ? \n";
            cout<<"Enter 1 fr Yes and 0 fr No\n";
            cin>>opt;
    }while(opt);
    for(int i=1;i<=n;i++)
    {
        cptr[i]->printname();
    }
    return 0;
}
