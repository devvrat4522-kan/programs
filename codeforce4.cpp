#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,i,j,s=0,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=n-1;k>=i;k--)
        {
            cout<<" ";
        }
        s=2*i-1;
        for(j=1;j<=s;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        s=2*i-1;
        for(k=2;k<=i;k++)
        {
            cout<<" ";
        }
        for(j=2*n-1;j>=s;j--)
        {
            cout<<"*";
            //5n--;
        }
        cout<<endl;
    }
    return 0;
}