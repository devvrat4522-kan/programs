
// SHORTEST PATH IN DIRECTED GRAPH 

#include<bits/stdc++.h>
using namespace std;

// step 1 : Create the adjacency list
// step 2 : Topological sort of the graph
// step 3 : shortest path 


class Graph{
    public:
    unordered_map<int , list<pair<int,int>>>adj;

    void addEdge(int u,int v,int w){
        pair<int,int>pt = make_pair(v,w);
        adj[u].push_back(pt);
    }

    void printadj(){
        for(auto i:adj){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<"["<<j.first<<","<<j.second<<"]";
            }
            cout<<endl;
        }
    }
    void top_sort(int node , unordered_map<int,bool>&vis , stack<int>&s){
        vis[node]=1;
        for(auto it : adj[node]){
            if(!vis[it.first]){
                top_sort(it.first,vis,s);
            }
        }
        s.push(node);
    }


    // shortest path function

    void shortest_path(int src,vector<int>&dis,stack<int>&s){
        dis[src]=0;

    while(!s.empty()){
        int top = s.top();
        s.pop();

        if(dis[top]!=INT_MAX){
            for(auto it : adj[top]){
                if(dis[top]+it.second < dis[it.first]){
                    dis[it.first] = dis[top]+it.second;
                }
            }
        }
    }
    }
};

int main(){
    Graph g;
    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,2,2);
    g.addEdge(1,3,6);
    g.addEdge(2,3,7);
    g.addEdge(2,4,4);
    g.addEdge(2,5,2);
    g.addEdge(3,4,-1);
    g.addEdge(4,5,-2);

    g.printadj();

    // step 2 : 

    int n=6;

    unordered_map<int,bool>vis;
    stack<int>s;

    for(int i=0;i<n;i++){
        if(!vis[i]){
            g.top_sort(i,vis,s);
        }
    }

    // step 3 :

    int src=1;
    vector<int>dis(n);
    for(int i=0;i<n;i++)
        dis[i]=INT_MAX;

    g.shortest_path(src,dis,s);

    cout<<"Shortest path : "<<endl;

    for(int i=0;i<dis.size();i++){
        cout<< dis[i]<<" ";
    }

    return 0;
}