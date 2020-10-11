#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*
1
10 3
2 2 3 3 3 3 3 3 3 3 3
*/
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int l=0;
        int h=n-1;
        int flag=0;
        while(l<=h){
            int m=l+(h-l)/2;
            cout<<m<<" "<<endl;
            if(a[m]==k && (a[m]==0 || a[m-1]<k)){
                flag=m;
                cout<<" flag is "<<m<<endl;
                break;
            }
            if(a[m]<k){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        cout<<"left most element index is "<<flag<<endl;
        cout<<endl;
        
    }
   return 0;
}
