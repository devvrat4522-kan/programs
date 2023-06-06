#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,k;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cin>>k;
int beg=0,end=n-1,mid,f=0;
        while(beg<=end)
        {
            mid=beg+(end-beg)/2;
            if(arr[mid]==k)
            {
                f=1;
                break;
            }
            else if(k>arr[mid])
                beg=mid+1;
            else if(k<arr[mid])
                end=mid-1;
        }
        if(f==1)
            cout<<mid;
        else
            cout<<-1;
    }