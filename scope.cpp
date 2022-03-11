//A new scope is created when u just write to curly braces
//functions loops and conditional statements creates new inner scope
#include<bits/stdc++.h>
using namespace std;
//global variables
int x=20;
int y=30;
int k;
int main()
{
    int x=8;
    int z;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    // default value of golbal variable is zero 
    // default value of local variable is garbage
    // local variable in local scope is imactfull

    // scope resolution operator
    cout<<::k<<endl;
    return 0;
}