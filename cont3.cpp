#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,k=0,j;
    cin>>n;
    long long a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            k=i;
            a[k]=a[i];
            k=0;
            for(j=i-1;j>=0;j--)
            {
                b[k]=a[j];
                k++;
            }
           // a[k+1]=a[i];
        }
        else
        {
           // b[k-1]=0;
            b[k]=a[i];
            k++;
        }
    }
    for(k=0;k<n;k++)
    {
        cout<<b[k]<<" ";
    }
    return 0;
}