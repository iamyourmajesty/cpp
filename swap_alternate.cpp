#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    //swap alternate nos.
    if((n&1)==1)
    {
        //odd
        for(int i=0;i<n-1;i=i+2)
        {
            arr[i]=(arr[i] ^ arr[i+1]);
            arr[i+1]=(arr[i] ^ arr[i+1]);
            arr[i]=(arr[i] ^ arr[i+1]);
        }
    }
    else
    {
        for(int i=0;i<n;i=i+2)
        {
            arr[i]=(arr[i] ^ arr[i+1]);
            arr[i+1]=(arr[i] ^ arr[i+1]);
            arr[i]=(arr[i] ^ arr[i+1]);
        }
    }
    for(auto x:arr)
    cout<<x<<" ";
    return 0;
}