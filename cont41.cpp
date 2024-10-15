#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<string>arr(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        int s1=0,s2=0;
        vector<string>arr1(n/k);
        for(int i=0;i<=n-k;i+=k){
            s2=0;
            for(int j=0;j<=n-k;j+=k){
                arr1[s1][s2]=arr[i][j];
                s2++;
            }
            s1++;
        }
        for(int i=0;i<n/k;i++){
            for(int j=0;j<n/k;j++){
                cout<<arr1[i][j]<<" ";
            }
            cout<<"\n";
        }
        // cout<<endl;
    }
}