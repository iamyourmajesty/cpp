#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool a=true;
    cout<<a<<endl;
    cout<<boolalpha<<a<<endl;
    cout<<noboolalpha<<a<<endl;

    // similarly we have flags for hex,oct,dec for decimals
    int b=27;
    cout<<b<<endl;
    cout<<hex<<b<<endl;
    cout<<oct<<b<<endl;
    cout<<dec<<b<<endl;
    
    // more flags showbase ,showpos,uppercase and for destroying flag effects we have noshowbase ,noshowpos and nouppercase
    cout<<showbase<<oct<<b<<endl;
    cout<<noshowbase;

    cout<<showpos<<b<<endl;
    cout<<noshowpos;
     cout<<uppercase<<hex<<b<<endl;
       
    //    few more
    int c=12;
    cout<<setw(5)<<setfill('*')<<c<<endl;//by default it is dash
    // cout<<fill('*')<<c<<endl;
    cout<<left<<c;
    return 0;
}