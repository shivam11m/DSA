#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int>adj[], int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printgraph(vector<int>adj[] ,int n){
    for(int i=0;i<n;i++){
        for(auto k:adj[i]){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}

void fn(vector<int>& v1, vector<int>& v2){
    int n=v1.size();
    vector<int>adj[n];
    for(int i=0;i<n;i++){
        addedge(adj,v1[i],v2[i]);
    }
    printgraph(adj,n);
}


int main()
{
    vector<int>v1,v2;
    int n;
   // cout<<"Enter the total elements of array"<<endl;
    cin>>n;
    //cout<<"Enter the coordinates of first array"<<endl;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v1.push_back(k);
    }
    //cout<<"Enter the coordinates of the second array"<<endl;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v2.push_back(k);
    }
    fn(v1,v2);
   return 0;
}
