#include<bits/stdc++.h>
using namespace std;
int main()
{
    static int y;
    cout<<y<<endl;
    // default value of static variable is zero
     
     //static variables created once
     //eg.. we can use this property to cout no of times loop runs
     int n=10;
     for(int i=0;i<n;i++)
     {
         static int x=0;
         x++;
         if(i==n-1)
         cout<<x;
     }
    return 0;
}