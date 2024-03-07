#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
void merge(int *arr,int s,int e,int &cnt){
    int mid=s+(e-s)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int *first = new int[l1];
    int *second = new int[l2];
    int mainindex = s;
    for(int i=0;i<l1;i++)
        first[i]=arr[mainindex++];
    mainindex=mid+1;
    for(int i=0;i<l2;i++)
        second[i]=arr[mainindex++];
    int i=0,j=0;
    mainindex=s;
    while(i<l1 && j<l2){
        if(first[i]<second[j]){
            cnt++;
            arr[mainindex]=first[i++];
            mainindex++;
        }
        else{
            arr[mainindex]=second[j++];
            cnt++;
            mainindex++;
        }
    }
    while(i<l1){
        arr[mainindex]=first[i++];
        mainindex++;
    }
    while(j<l2){
        arr[mainindex]=second[j++];
        mainindex++;
    }
}
void mergesort(int *arr ,int s,int e,int &cnt){
    if(s<e){
        int mid= s+(e-s)/2;
        mergesort(arr,s,mid,cnt);
        mergesort(arr,mid+1,e,cnt);
        merge(arr,0,e,cnt);
    }
}
int main(){
    int cnt=0;
    int arr[6]={6,3,9,2,8,0};
    mergesort(arr,0,6,cnt);
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    cout<<cnt;
}