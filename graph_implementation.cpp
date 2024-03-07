#include<bits/stdc++.h>
using namespace std;
class graph{
    unordered_map<int,list<int>>edge;
    public : 
    void create(int u,int v ,bool dir){
        edge[u].push_back(v);
        if(dir==0){
            edge[v].push_back(u);
        }
    }
    void print(){
        for(auto it:edge){
            cout<<it.first<<" -> ";
            for(auto it1:it.second){
                cout<<it1<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    int n,m;
    cout<<"Enter the number of nodes : ";
    cin>>n;
    cout<<"Enter the number of edges : ";
    cin>>m;

    graph g;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.create(u,v,1);
    }
    g.print();
}