#include<bits/stdc++.h>
using namespace std;
#define ll long long
void test()
{
    ll n,t,count=0;
    cin>>n>>t;
    ll a[n],b[n],i,j;
    for(i=0;i<n;i++){
        cin>>a[i];
        if((t-a[i])<0)
            count++;
    }
    for(i=0;i<n;i++)
        cin>>b[i];
    if(count==n)
        cout<<"-1";
    else{
        
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        test();
        cout<<"\n";
    }
    return 0;
}