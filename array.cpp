#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       int n,j=0;
       cin>>n;
       int arr[n];
       int mini=INT_MAX;
       for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=mini) {
            mini=arr[i];
            j=i;
        }
       }
        arr[j]++;
        // for(int i=0;i<n;i++)
        //     cout<<arr[i]<<" ";
        long long prod=1;
        for(int i=0;i<n;i++)
            prod=prod*arr[i];
        cout<<prod<<endl;
    }
}