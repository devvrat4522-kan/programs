#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(j=0;j<n;j++)
            cin>>b[i];
            f=0;int s=0,f1=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]>f1)
            {
                f1=a[i];
                f=i;
                s=1;
            }
        }
        if(s==0)
        {
        if(a[i]==f1)
            {
                if(b[i]>b[f])
                {
                    f=i;
                }
                else
                {
                    f=f+1;
                }
            }
        }
        cout<<f<<endl;;
    }
    return 0;
}