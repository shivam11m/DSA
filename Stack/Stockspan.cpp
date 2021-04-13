#include <iostream>
#include<bits/stdc++.h>
typedef long long int lp;
using namespace std;

int main()
{
    int a[]={15,13,12,14,16,8,6,4,10,30};
    int n=sizeof(a)/sizeof(a[0]) ;
    stack<int>s;
    
    s.push(0);
    cout<<1<<" ";
    for(int i=1;i<n; i++){
        while(!s.empty() && a[s.top()] < a[i] ){
            s.pop();
        }    
        int span=(s.empty())? (i+1): (i-s.top());
        cout<<span<<" ";
        s.push(i);
    }

   return 0;
}
