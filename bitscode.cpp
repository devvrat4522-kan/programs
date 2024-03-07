// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      unsigned int pos=0;
//      int n=15;
//         while(n<100){
//             // pos++;
//             // if(n&1==1)
//             //     cout<<pos<<"\n";
//             n=n<<1;
//             cout<<n<<" ";
//         }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
     map<char,int>mp;
        char ch='A';
        for(int i=0;i<26;i++){
            mp[ch]=i+1;
            ch++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            cout<<i->first<<" "<<i->second<<endl;
        }
}