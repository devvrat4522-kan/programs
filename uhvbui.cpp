#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,n,count=0,f=1,flag=0;
    cin>>t;
    while (t--)
    {
        cin>>n;
        long long a[n];
        for (i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        while(f<=n)
        {
            if(f==1)
            {
                count=n;
            }
            else
            {
                int beg=0,end=f,j,s=0;
                while(end<=n)
                {
                    for(j=beg;j<end;j++)
                    {
                        for(int k=j;k<end-1;k++)
                        {
                        if(a[j+1]<a[j])
                        {
                            flag=1;
                            break;
                        }
                        }
                        s++;
                    }
                    beg++;
                    end++;
                }
                count=count+s;
            }
        f++;
        }
        cout<<count<<"\n";
    }
    return 0;
}