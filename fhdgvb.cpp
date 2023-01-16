#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,f=0,flag=0;
    cin>>n>>m;
    long long a[n],b[m],c[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    if(f==1)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<)
        }
    }
    while(f<=n)
    {
        int beg=0,end=f;
        while(end<=n)
        {
            for(int i=beg;i<end;i++)
            {
               c[j]=a[i];
               j++; 
            }
            for(i=0;i<n;i++)
            {
                if(a[i]!=c[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                f=n;
                break;
            }
            else
            {
                beg++;
                end++;
            }
            
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