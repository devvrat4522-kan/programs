#include<bits/stdc++.h>
using namespace std;

static bool comp(string a,string b){
    string t1=a+b;
    string t2=b+a;
    return t1>t2;
}
string solve(vector<int>nums){
    string st="";
    vector<string>vc;
    for(int i=0;i<nums.size();i++)
        vc.push_back(to_string(nums[i]));
    sort(vc.begin(),vc.end(),comp);
    if(vc[0]=="0")
        return "0";
    for(auto it:vc){
        st+=it;
    }
    return st;
}
int main(){
    vector<int>nums={3,30,34,5,9};
    string st=solve(nums);
    cout<<st<<endl;
    string st1="330";
    string st2="3435";
    if(st1>st2)
        cout<<st1;
    else
        cout<<st2<<endl;
}