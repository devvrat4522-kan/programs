#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[]={12,35,1,10,34,999,1000},i,larg=-10000,s_larg;
    for(i=0;i<7;i++)
    {
        if(arr[i]>larg){
            s_larg=larg;
            larg=arr[i];
        }
        else if(arr[i]>s_larg && s_larg!=larg)
            s_larg=arr[i];
    }
    cout<<s_larg;
    }