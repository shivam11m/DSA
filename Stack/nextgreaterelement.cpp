#include <iostream>
#include<bits/stdc++.h>
typedef long long int lp;
using namespace std;

int main()
{
    int a[]={5,15,10, 8,6, 12,9, 18};
    int n=sizeof(a)/sizeof(a[0]) ;
    stack<int>s;
    
    vector<int>v;
    v.push_back(-1);
    
    s.push(a[n-1]);
    
    for(int i=n-2;i>=0;i--){
        while(!s.empty() && a[i]>s.top()){
            s.pop();
        }
        int nextgreater= s.empty() ? -1 : s.top();
        
        v.push_back(nextgreater);
        s.push(a[i]);
    }
    
    reverse(v.begin(),v.end());
    for(auto k:v){
        cout<<k<<" ";
    }
    
   return 0;
}
