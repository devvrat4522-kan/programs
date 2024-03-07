// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long t;
//     cin>>t;
//     while (t--)
//     {  
//         string st,st1;
//         int i,l,beg=0,end,count=0,temp;
//         cin>>st;
//         l=st.length();
//         end=l-1;
//         if(l==2 && st[0]==st[1])
//         {
//             cout<<st[0]<<"a"<<st[1];
//         }
//         else{
//         while(beg<=end)
//         {
//             if(st[beg]!=st[end])
//             {
//                 beg++;
//                 count++;
//                 st1=st[beg];
//                 temp=beg;
//             }
//             else
//             {
//                 beg++;
//                 end--;
//             }
//         }
//         if(count==1){
//             for(int i=l;i>=temp;i--)
//             {
//                 st[i+1]=st[i];
//             }
//             st[i]=st1;
//         }
//         else
//             cout<<"NA";
//         }
//     }
//     return 0;
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