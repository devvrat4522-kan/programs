#include<bits/stdc++.h>
using namespace std;

bool comp(vector<int>&a ,vector<int> &b){
    return a[2]<b[2];
}


// initlization of parent and rank vector.
// parent of each node is node itself and rank is zero.
void makeSet(vector<int> &parent,vector<int> &rank,int n){
    for(int i=0;i<n;i++){
        parent[i]=i;
        rank[i]=0;
    }
}


int findParent(vector<int> &parent , int node ){
    if(parent[node]==node)
        return node;
    return parent[node]= findParent(parent,parent[node]);
}

void unionSet(int u,int v , vector<int> &parent , vector<int> &rank){
    int u = findParent(parent,u);
    int v = findParent(parent,v);

    if(rank[u] < rank[v])
        parent[u] = v;  
    else if(rank[u] > rank[v])
        parent[v] = u;
    else{
        parent[u] = v;
        rank[u]++;
    }
}


int mainAlgo(vector<vector<int>> &edges,int n){
    sort(edges.begin(),edges.end(),comp);
    vector<int>parent;
    vector<int>rank;
    makeSet(parent,rank,n);

    int min_weight = 0;
    for(int i=0;i<edges.size();i++){
        int u = findParent(parent,edges[i][0]);
        int v = findParent(parent,edges[i][1]);
        int wt = edges[i][2];

        // u != v means u and v are of disjoint i.e. they are not making cycle.
        if(u!=v){
            min_weight += wt;
            unionSet(u,v,parent,rank);
        }
    }
    return min_weight;
}

int main(){

}