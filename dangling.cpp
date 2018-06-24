#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int *call();
int main()
{
    int *p;
    p=call();
    fflush(stdin);
    cout<<*p;
    return 0;
}
int *call()
{
   // static int x=25;//will retain value
   int x=25;//will give garbage value
    ++x;
    return &x;
}
