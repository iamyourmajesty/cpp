#include<bits/stdc++.h>
using namespace std;
int main()
{
    // +,-,*,/
    cout<<-9%2<<endl;
    cout<<9%2<<endl;
    //postincrement and preincrement
    int a=3,b=5;
    b=a++;
    b=++a;
    cout<<a<<endl<<b<<endl;
    // more
    a*=b;
    cout<<a<<endl;
    return 0;
}