#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string str1=str;
        reverse(str.begin(), str.end());
        if(str1==str){
            for(int i=1; i<str.length(); i+=2){
                char ch=str[i];
                str[i]=str[i-1];
                str[i-1]=ch;
            }
            if(str==str1) 
                cout<<"NO";
            else{
                cout<<"YES\n";
                cout<<str;
            }
        }
        else{
            cout<<"YES\n";
            cout<<str;
        }
        cout<<"\n";
    }
}