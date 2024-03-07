#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,5,3,3,8,6,5,9,2,5},i,k=5;
    map<int,int>mp;
    for(i=0;i<11;i++)
        mp[arr[i]]++;
    for(i=0;i<11;i++)
    {
        cout<<mp[k-arr[i]]<<" ";
    }
        

}