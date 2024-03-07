#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={1,2,3,1,2,3};
     int i,j,k=2;
        unordered_map<int,int>mp;
        for(i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        for(i=0;i<nums.size();i++)
        {
            cout<<mp[nums[i]]<<" ";
        }
        return false;
}
