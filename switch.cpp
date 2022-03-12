#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"Enter operator: ";
    char op;
    cin>>op;
    double res;
    switch (op)
    {
    case '+':
        res=a+b;
        break;
    case '-':
        res=a-b;
        break;
    case '*':
        res=a*b;
        break;
    case '/':
        res=a/b;
        break;        
    default:
        cout<<"Enter the correct operator: ";
        break;
    }
    cout<<"The result is "<<res;
    return 0;
}