#include<bits/stdc++.h>
using namespace std;
int main()
{ //1.For Integers
    //prefix ox for hexa decimal,0 for octal,0b for binary
    int a=10;
    int b=0x23;
    cout<<b<<endl;
    int c=014;
    cout<<c<<endl;
    // int d=0b5; works only on compilers with c++14

    // 2.For floating point Integer
    auto x=10.3345;
    auto y=10.3345f;
    cout<<sizeof(x)<<endl;
    cout<<sizeof(y)<<endl;
    return 0;
}