#include<bits/stdc++.h>
using namespace std;
float  plusoverloaded(float a ,float b)
{
    return a+b;
}
void plusoverloaded(string st1,string st2)
{
    cout<<st1+st2;
}
void plusoverloaded(int arr[],int l,int n)
{
    for(int i=0;i<l;i++)
    {
        arr[i]+=n;
    }
    for(int i=0;i<l;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void plusoverloaded(int arr1[],int arr2[],int l1,int l2)
{
    int k=0,f=0,i,j,s;
    for(int i=0;i<l2;i++)
    {
        for(int j=0;j<l1;j++)
        {
            if(arr2[i]==arr1[j]);
            {
               f=1;
               break;
            }
        }
        if(f==0)
        {
            int s=l1+k;
            arr1[s]=arr2[j-1];
            k++;
        }
    }
    for(i=0;i<s;i++)
        cout<<arr1[i]<<" ";
}