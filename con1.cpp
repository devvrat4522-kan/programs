#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>n;
    long long a[n],sign=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if((a[i]<0&&a[i+1]<0))
        {
            sign++;
        }
        else if(a[i]>0&&a[i+1]>0)
        {
            sign++;
        }
    }
    if(sign%2==0)
    {
        sign=sign/2;
    }
    else
    {
        sign=0;
    }
    cout<<sign;
   return 0;
}