#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,f,k;
    cin>>n>>m;
    long long a[n],b[m],c[m],flag=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    f=m;
    while(f<=n)
    {
        int beg=0,end=f;
        while(end<=n)
        {
            long long c[m]={},k=0;
        for(j=beg;j<end;j++)
        {
            c[k]=a[j];
            k++;
        }
        for(i=0;i<end;i++)
        {
            if(c[i]!=b[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            f=n;
        }
        else
        {
            beg++;
            end++;
        }
        k=0;
        flag=0;
        }
        f++;
    }
    if(flag==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}