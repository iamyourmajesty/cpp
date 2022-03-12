#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if(age>18)
    cout<<"you can vote in assembly elections\n";
    else if(age>14)
    cout<<"you can vote in school elections\n";
    else if(age>8 || age<14)
    cout<<"you can vote for babies"<<endl;
    else
    cout<<"you can't vote"<<endl;

    return 0;
}