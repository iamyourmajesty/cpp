//1. divisible by 4 and not by 100
//2. divisible by 400
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin>>year;
    if(((year%4)==0) && ((year%100)!=0))
    cout<<"Leap year";
    else if(year%400==0)
    cout<<"Leap year";
    else
    cout<<"NOt a leap year";
    return 0;
}
