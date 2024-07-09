// // #include<bits/stdc++.h>
// // using namespace std;

// // static bool comp(string a,string b){
// //     string t1=a+b;
// //     string t2=b+a;
// //     return t1>t2;
// // }
// // string solve(vector<int>nums){
// //     string st="";
// //     vector<string>vc;
// //     for(int i=0;i<nums.size();i++)
// //         vc.push_back(to_string(nums[i]));
// //     sort(vc.begin(),vc.end(),comp);
// //     if(vc[0]=="0")
// //         return "0";
// //     for(auto it:vc){
// //         st+=it;
// //     }
// //     return st;
// // }
// // int main(){
// //     vector<int>nums={3,30,34,5,9};
// //     string st=solve(nums);
// //     cout<<st<<endl;
// //     string st1="330";
// //     string st2="3435";
// //     if(st1>st2)
// //         cout<<st1;
// //     else
// //         cout<<st2<<endl;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// int fact(int n,int val,int dig){
//     if(n==1)
//         return val*9;
//     else
//         return val*dig*fact(n-1,val,dig-1);
// }
// int main(){
//     // string st="1234";
//     // int value=0;
//     // for(auto ch:st){
//     //     int i=(ch-'0');
//     //     value+=i;
//     // }
//     // cout<<value<<endl;
//     int n=4;
//     cout<< fact(n,1,9);
// }

#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>vc,int k){
    priority_queue<int,vector<int>,greater<int>>heap(vc.begin(),vc.begin()+k);
    for(int i=k;i<vc.size();i++){
        if(vc[i]>heap.top()){
            cout<<heap.top()<<"\n";
            heap.pop();
            heap.push(vc[i]);
        }
    }
}

void mapping(map<int,string>mp){
    for(auto i=mp.rbegin();i!=mp.rend();i++)
        cout<<i->first<<" "<<i->second<<endl;
    for(auto it=mp.end(); it!=mp.begin();it--){
        cout<<it->first<<" "<<it->second<<endl;
    }
}

void stack_sort(stack<int>&st){
    vector<int>vc;
    while(!st.empty()){
        vc.push_back(st.top());
        st.pop();
    }
    sort(vc.begin(),vc.end(),greater<int>());
    for(int i=0;i<vc.size();i++){
        st.push(vc[i]);
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}



int main(){
    // vector<int>vc={3,2,3,1,2,4,5,5,6};
    // // solve(vc,4);
    //  map<int,string> mp = {
    //     {1, "one"},
    //     {2, "two"},
    //     {3, "three"},
    //     {4, "four"},
    //     {5, "five"}
    // };
    // mapping(mp);
    stack<int>st;
    st.push(5);
    st.push(3);
    st.push(12);
    st.push(7);
    st.push(1);
    stack_sort(st);
    return 0;
}