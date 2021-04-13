#include <iostream>
#include<bits/stdc++.h>
typedef long long int lp;
using namespace std;

int main()
{
    int a[]={15,10,18,12, 4,6,2, 8};
    int n=sizeof(a)/sizeof(a[0]) ;
    stack<int>s;
    
    s.push(a[0]);
    cout<<-1<<" ";
    
    for(int i=1;i<n;i++){
        
        while(!s.empty() && s.top()<a[i]){
            s.pop();
        }
        
        int prevgre = s.empty() ? -1 : s.top();
        
        cout<<prevgre<<" ";
        
        s.push(a[i]);
        
    }

   return 0;
}
