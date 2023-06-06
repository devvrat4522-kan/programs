#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,1};int n=1;
   int i=0,cnt=0,tot,n1,n2,sum=0;
        vector<int>vc;
        tot=(n*(n+1))/2;
        for(i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1])
            {
                cnt=arr[i];
                break;
            }
        }
        cout<<cnt<<endl;
        for(i=0;i<arr.size();i++)
            sum+=arr[i];
        n1=cnt;
        n2=tot-(sum-n1);
        cout<<sum<<endl;
       cout<<n1<<endl;
       cout<<n2;
}