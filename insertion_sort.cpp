#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,1,9,4,0,3,6},i,j,temp;
    for(int i=1;i<6;i++){
        for(j=i-1;j>=0;j--){
            temp=arr[i];
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else
                break;
        }
        arr[j+1]=temp;
    }
    cout<<"After sorting \n";
    for(int i=0;i<7;i++)
        cout<<arr[i]<<" ";
    return 0;
}