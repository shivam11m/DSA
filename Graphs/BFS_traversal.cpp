#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int>adj[], int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void bfs(vector<int>adj[],int n){
    bool visited[n+1]={0};
    memset(visited,0,sizeof(visited));
    cout<<"BFS traversal is"<<endl;
    cout<<0<<" ";
    visited[0]=true;
    for(int i=0;i<n;i++){
        for(auto k:adj[i]){
            if(visited[k]==false){
                cout<<k<<" ";
                visited[k]=true;
            }
        }
    }
}
/*
    void bfs(vector<int>adj[],int v){
    bool visited[v+1];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    queue<int> q;
    int s=0;
    visited[s]=true;
    q.push(s);
    cout<<"Dfs traversal "<<"\n";
    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int t:adj[u]){
            if(visited[t]==false){
                visited[t]=true;
                q.push(t);
            }
        }
    }
    
}
*/
int main()
{
    vector<int>v1,v2;
    int n,k;
   // n is total no. of edges
    cin>>n;
    //cout<<"Enter the coordinates of first array"<<endl;
    for(int i=0;i<n;i++){
        cin>>k;
        v1.push_back(k);
    }
    //cout<<"Enter the coordinates of the second array"<<endl;
    for(int i=0;i<n;i++){
     
        cin>>k;
        v2.push_back(k);
    }
    // Adjacency list construction
    vector<int>adj[n];
    
    for(int i=0;i<n;i++){
        addedge(adj,v1[i],v2[i]);
    }
    
    bfs(adj,n);
    return 0;
}

/* 
7
0 0 0 1 2 3 4   
1 2 5 3 4 5 5

             1 '''''''''' 3
            ''         ''
          '' ''      ''  ''
        0    ''    ''    ''
        ''   ''  ''      ''
          ''  ''         ''
             2 '''''''''  4
  
 
*/

