//brute force 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0 || n==1)
    cout<<0;
    else
    for(int i=2;i<=n;i++)
    {
        while (n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
        
    }
    
    return 0;
}