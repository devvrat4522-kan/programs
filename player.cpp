#include<bits/stdc++.h>
using namespace std ;
#define ll long long
int main()
{
    int t,i,j,k;
    cin>>t;
    while(t--)
    {
        int n,l,r;
        cin>>n;
        ll arr[n],count=1,f=0,max=-10000000;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                if(arr[i]<=arr[j])
                {
                    l=arr[i];
                    r=arr[j];
                }
                else
                {
                    l=arr[j];
                    r=arr[i];
                }
                sort(arr+l,arr+r);
                for(k=l;k<r;k++)
                {
                    if(arr[k]!=arr[k+1])
                    {
                        count++;
                    }
                } 
                f=r-l-count;
                if(f>max)
                {
                    max=f;
                }  
            }
        }
        cout<<max<<" ";
    }
    return 0;
}