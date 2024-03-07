#include<bits/stdc++.h>
using namespace std;

void dfs(int node,unordered_map<int,bool>&vis, stack<int>&st,unordered_map<int,list<int>>&adj){
    vis[node] = true;
    for(auto nbr:adj[node]){
        if(!vis[nbr]){
            dfs(nbr,vis,st,adj);
        }
    }
    st.push(node);
}

void redfs(int node,unordered_map<int,bool>&vis, unordered_map<int,list<int>>&adj){
    vis[node] = true;

    for(auto nbr:adj[node]){
        if(!vis[nbr]){
            redfs(nbr,vis,adj);
        }
    }
}


int strongConnected(int v,vector<vector<int>>&edges){
    unordered_map<int,list<int>>adj;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // step-1: topological sort

    stack<int>st;
    unordered_map<int,bool>vis;

    for(int i=0;i<v;i++){
        if(!vis[i]){
            dfs(i,vis,st,adj);
        }
    }

    // step-2 : Transpose of graph

    unordered_map<int,list<int>>trans;
    for(int i=0;i<v;i++){
        for(auto nbr:adj[i]){
            trans[nbr].push_back(i);
        }
    }

    // dfs call using 

    int count = 0;
    while(!st.empty()){
        int top = st.top();
        st.pop();
        if(!vis[top]){
            count++;
            redfs(top,vis,adj);
        }
    }

    return count;
}
int main(){

}