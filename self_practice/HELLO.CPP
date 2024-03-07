#include<bits/stdc++.h>
using namespace std;
int main(){ 
    vector<string>strs={"eat","tea","tan","ate","nat","bat"};
    unordered_map<string, vector<string>> mp;
        for(auto x: strs){
            string word = x;
            sort(word.begin(), word.end());
            mp[word].push_back(x);
        }
        
        vector<vector<string>> ans;
        for(auto x: mp){
            cout<<x.first<<" ";
            ans.push_back(x.second);
        }
    for(int j=0;j<ans.size();j++){
        for(int i=0;i<ans[0].size();i++){
            cout<<ans[j][i]<<" ";
        }
    }
}