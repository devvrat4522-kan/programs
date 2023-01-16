#include<bits/stdc++.h>
using namespace std;
int equat(int [],int);
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    equat(a,n);
    //cout<<s;
    return 0;
}
int equat(int x[],int y)
{
    long long min,max;
    min=10000000000;
    max=-10000000000;
    for(int i=0;i<y;i++)
    {
        if(x[i]<min)
        {
            min=x[i];
        }
    }
    for(int i=0;i<y;i++)
    {
        if(x[i]>max)
        {
            max=x[i];
        }
    }
    cout<<min<<" "<<max;
    return 0;
}