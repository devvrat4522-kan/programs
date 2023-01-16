#include<bits/stdc++.h>
using namespace std;
int equat(int,int);
int main()
{
    long long  n,m,s;
    cin>>n>>m;
    s=equat(n,m);
    cout<<s;
    return 0;
}
int equat(int x,int y)
{
    long long sum=0;
    int i=0;
    while(i<=y)
    {
        if(i==0)
        {
            sum=sum+(pow(x,i)-1);
            i=i+2;
        }
        else
        {
            sum=sum+pow(x,i);
            i=i+2;
        }
    }
    //cout<<sum;
    return sum;
}