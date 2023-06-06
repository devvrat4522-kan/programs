#include<bits/stdc++.h>
using namespace std;
long long  recur(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*recur(n-1) ;
}
int main()
{
    int n;
    cin>>n;
    cout<<recur(n);
    
    return 0;
}