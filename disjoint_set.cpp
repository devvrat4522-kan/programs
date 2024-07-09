#include<bits/stdc++.h>
using namespace std;

// Used in Kruskal's Algorithm


// DisjointSet used for find the ultimate parent;
// steps:

// 1. find ultimate parent of u and v as nu and nv
// 2. find rank of nu and nv 
// 3. conncet smaller rank to larger rank node


class DisjointSet{
    vector<int>rank,parent;
    public:
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);

        for(int i=0;i<=n;i++)
            parent[i]=i;
    }


    // for checking whether the two nodes belongs to same graph
    int findPar(int node){
        if(node==parent[node])
            return node;
        else
            return parent[node]=findPar(parent[node]);
    }

    
    void unionByRank(int u,int v){
        int nu = findPar(u);
        int nv = findPar(v);
        if(rank[nu]<rank[nv])
            parent[nu]=nv;
        else if(rank[nu]>rank[nv])
            parent[nv]=nu;
        else{
            parent[nv]=nu;
            rank[nu]++;
        }
    }
};

int main(){
    DisjointSet ds(6);
    ds.unionByRank(1,2);
    ds.unionByRank(2,3);
    ds.unionByRank(4,5);
    ds.unionByRank(6,7);
    ds.unionByRank(5,6);
    ds.unionByRank(3,7);

    // for checking whether the two nodes belongs to same graph
    if(ds.findPar(3)==ds.findPar(7))
        cout<<"Same\n";
    else
        cout<<"Not Same\n";
    
    return 0;
}