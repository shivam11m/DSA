#include <iostream>
#include<bits/stdc++.h>
typedef long long int lp;
using namespace std;

/*

INPUT
1
6
9 8 4 2 4 1
*/

int quick(int a[],int l,int h){
    int pivot=a[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}

int quicksort(int a[],int l,int h){
    if(l<h){
        int p=quick(a,l,h);
        quicksort(a,l,p-1);
        quicksort(a,p+1,h);
    }
}

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       quicksort(a,0,n-1);
       for(int i=0;i<n;i++){
           cout<<a[i]<<" ";
       }
       cout<<endl;
   }
   return 0;
}
