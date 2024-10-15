#include<bits/stdc++.h>
using namespace std;
int part(vector<int>&vc,int low,int high){
    int i=low-1;
    int pivot=vc[high];
    for(int j=low;j<=high-1;j++){
        if(vc[j]>pivot){
            i++;
            swap(vc[i],vc[j]);
        }
    }
    swap(vc[i+1],vc[high]);
    return i+1;
}
void solve(vector<int>&vc,int low,int end){
    if(low<end){
        int pt=part(vc,low,end);
        solve(vc,low,pt-1);
        solve(vc,pt+1,end);
    }
}
int main(){
    vector<int>vc={10, 7, 8, 9, 1, 5};
    solve(vc,0,5);
    for(int i=0;i<vc.size();i++)
        cout<<vc[i]<<" ";
    return 0;
}