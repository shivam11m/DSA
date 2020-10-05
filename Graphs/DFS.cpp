#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int>v[], bool vis[],int z){
    vis[z]=true;
    cout<<z<<" ";
    for(auto k: v[z]){
        if(vis[k]==false){
            dfs(v,vis,k);
        }
    }
    
}

int main()
{
    vector<int>v[6];

    auto add=[&](int u1,int v1){
        v[u1].push_back(v1);
        v[v1].push_back(u1);
    };
    add(0,1);
    add(0,2);
    add(1,3);
    add(2,3);
    add(1,4);
    add(4,5);
    int n=6;
    // Adjacency List
    /*
    for(int i=0;i<n;i++){
        for(auto k: v[i]){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    */
    bool vis[n];
    for(int i=0;i<n;i++){
        vis[i]=false;
    }
    dfs(v,vis,0);
   return 0;
}
