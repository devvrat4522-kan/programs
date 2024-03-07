#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={7,10,4,3,20,15,3};
    int n=6;
    int l=0,r=5;
    map<int,int>mp;
    while(l<=r)
    {
        mp.insert({arr[l],1});
        mp.insert({arr[r],1});
        l++;
        r--;
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    map<int,int>mp;
        int i=0,j=r;
        while(i<=j)
        {
            mp.insert({arr[i],1});
            mp.insert({arr[j],1});
            i++;
            j--;
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(k==1)
            {
                return it->first;
            }
            k--;
        }
}