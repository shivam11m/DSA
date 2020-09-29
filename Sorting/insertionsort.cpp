#include <iostream>
#include<bits/stdc++.h>
typedef long long int lp;
using namespace std;

void insertionsort(int a[],int n){
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       insertionsort(a,n);
       for(int i=0;i<n;i++){
           cout<<a[i]<<" ";
       }
       cout<<endl;
   }
   return 0;
}
