#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        long long arr[n],arr1[n],beg=0,end=n-1;
        for(i=0;i<n;i++)
            cin>>arr[i];
        i=0;
        while(beg<=end)
        {
            arr1[i]=arr[beg];
            i++;
            arr1[i]=arr[end];
            i++;
            end--;
            beg++;
        }
        for(i=0;i<n;i++)
            cout<<arr1[i]<<" ";
        cout<<endl;
    }
    return 0;
}