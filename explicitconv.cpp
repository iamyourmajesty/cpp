#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=17;
    int y=3;
    double z1=x/y;
    // c -type conversion
    double z2=double(x)/y;
    // c++ recomended way
    //in c type we don't cheack whether we can convert to that type or not and due to which we sometimes get suprised
    double z3=static_cast<double>(x)/y;
    cout<<z1<<endl<<z2<<endl<<z3<<endl;

    
    return 0;
}