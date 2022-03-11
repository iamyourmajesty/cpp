#include<bits/stdc++.h>
using namespace std;
int main()
{
    // sizeof function returns size of data types and leterals in bytes
    //it will depends upon compiler too
    // eg.. sizeof(int) in turbo is 2 bytes
    // but sizeof(int) in gcc is 4 bytes

    cout<<sizeof(int)<<"\n";    
    cout<<sizeof(char)<<"\n";    
    cout<<sizeof(long long)<<"\n";    
    cout<<sizeof(float)<<"\n";    

    int x=5;
    cout<<sizeof(x++)<<endl;
    
    // for leterals
    cout<<sizeof(10ll)<<endl;
    cout<<sizeof(29.230)<<endl;
    cout<<sizeof('h')<<endl;
    cout<<sizeof("hello")<<endl;

    // for bool - 1 byte
    cout<<sizeof(bool)<<endl;
    cout<<sizeof(false)<<endl;
    return 0;
}