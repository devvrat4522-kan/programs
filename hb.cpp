#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>vc={{1,2,3},{2,3,4},{34,4,5}};
    vector<vector<int>>ans(3,vector<int>(vc[0].size(),-1));
    int i;
    for(i=0;i<3;i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<vc.size()<<endl;
    //  int k=0,sign=1;
    //     char ch='j';
    //     int cnt=0,i=0,lr=matrix[0].size(),lc=matrix.size(),j;
    //     vector<int>ans;
    //     vector<vector<int>>vc(matrix.size(),vector<int>(matrix[0].size(),-1));
    //     while(cnt<(lr*lc)){
    //         if(sign>0){
    //             if(ch=='j'){
    //                 for(j=k;j<matrix[0].size();j++){
    //                     if(vc[i][j]==-1){
    //                         ans.push_back(matrix[i][j]);
    //                         vc[i][j]=0;
    //                     }
    //                     else
    //                         break;
    //                 }
    //                 j--;
    //             }
    //             else if(ch=='i'){
    //                 for(i=k;i<matrix.size();i++){
    //                     if(vc[i][j]==-1){
    //                         ans.push_back(matrix[i][j]);
    //                         vc[i][j]=0;
    //                     }
    //                     else
    //                         break;
    //                 }
    //             }
    //             i--;
    //         }
    //         else{
    //             if(ch=='j'){
    //                 for(j=k;j>=0;j--){
    //                      if(vc[i][j]==-1){
    //                         ans.push_back(matrix[i][j]);
    //                         vc[i][j]=0;
    //                     }
    //                     else
    //                         break;
    //                 }
    //                 j++;
    //             }
    //             if(ch=='i'){
    //                 for(i=k;i>=0;i--){
    //                      if(vc[i][j]==-1){
    //                         ans.push_back(matrix[i][j]);
    //                         vc[i][j]=0;
    //                     }
    //                     else
    //                         break;
    //                 }
    //                 i++;
    //             }
    //         }
    //             if(vc[i+1][j]==-1 and i+1<lc){
    //                 k=i+1;
    //                 sign=1;
    //                 ch='i';
    //             }
    //             else if(vc[i][j-1]==-1 and j-1>=0){
    //                 k=j-1;
    //                 sign=-1;
    //                 ch='j';
    //             }  
    //             else if(vc[i][j+1]==-1 and j+1<lc){
    //                 k=j+1;
    //                 sign=1;
    //                 ch='j';
    //             }
    //             else if(vc[i-1][j]==-1 and i-1>=0){
    //                 k=i-1;
    //                 sign=-1;
    //                 ch='i';
    //             }
    //     } 
}