#include<bits/stdc++.h>
using namespace std;


void dfs(int node,int parent,int timer,vector<int> &low,vector<int> &disc ,unordered_map<int,bool> &vis,unordered_map<int,list<int>>&adj,vector<vector<int>>&res){
    vis[node] = true;
    disc[node] = low[node] = timer;
    timer++;

    vector<int> ans;
    for(auto nbr: adj[node]){
        if(nbr==parent) 
            continue;
        if(!vis[nbr]){
            dfs(nbr,node,timer,low,disc,vis,adj,res);
            low[node] = min(low[node],low[nbr]);

            // check for bridge
            if(disc[node]<low[nbr]){
                ans.push_back(node);
                ans.push_back(nbr);
                res.push_back(ans);
            }
        }
        else{
            // back Edge
            low[node] = min(low[node],disc[nbr]);
        }
    }
}


vector<vector<int>>bridge(vector<vector<int>>&edges,int v,int e){
    unordered_map<int,list<int>>adj;

    // Adjacency matrix
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer=0;
    vector<int>disc(v);
    vector<int>low(v);
    int parent =-1;
    unordered_map<int,bool>vis;

    for(int i=0;i<v;i++){
        disc[i]=-1;
        low[i] = -1;
        vis[i] = false;
    }

    vector<vector<int>>res;

    // DFS traversal
    for(int i=0;i<v;i++){
        if(!vis[i])
            dfs(i,parent,timer,low,disc,vis,adj,res);
    }
    return res;
}
int main(){

}