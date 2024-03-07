#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
        long long currsum=nums[0],sum=0;
        for(int i=0;i<nums.size()-1;i++){
            sum=nums[i];
            for(int j=i+1;j<nums.size();j++){
                sum+=nums[j];
                if(sum>=currsum)
                    currsum=sum;
            }
            cout<<sum<<endl;
        }
        return currsum;
    }
int main(){
    vector<int>vc={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(vc);
}