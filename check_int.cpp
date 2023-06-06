#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin>>x;
    int n = x;
    if(x-n>0)
    {
        cout<<"no";
    }
    else
    cout<<"yes";
    cout<<++(++n); 
    cout<<n++;
    cout<<n;
    return 0;
}