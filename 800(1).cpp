#include<bits/stdc++.h>
using namespace std;
string solve(string s){
    int l=s.length();
    map<string,int>mp;
    for(int i=0;i<l;i++){
        string val="";
        if(s[i]>='a' or s[i]>='z' or s[i]>='A' or s[i]>='Z')
            val+=s[i];
        else{
            if(mp.find(val)!=mp.end()){
                return val;
            }
            else
            mp[val]++;
        }
    }
    return "";
}
int main(){
    string str ;
    cout<<"enter";
    cin>>str;
    return solve(str);
}