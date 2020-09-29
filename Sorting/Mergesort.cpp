#include <iostream>
#include<bits/stdc++.h>
typedef long long int lp;
using namespace std;


/* INPUT
2
6
7 4 2 8 2 9
5 
7 5 3 2 1
*/
void merge(int a[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++){
        left[i]=a[l+i];
    }
    for(int j=0;j<n2;j++){
        right[j]=a[m+j+1];
    }
    int i=0,j=0,k=l;
    // i<n1 to avoid index problem
    while(i<n1 && j<n2){ 
        if(left[i]<=right[j]){
            a[k]=left[i];
            
            k++;
            i++;
        }
        else{
            a[k]=right[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        a[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=right[j];
        k++;
        j++;
    }
}

void mergesort(int a[],int l,int r){
    if(r>l){
        int m=l+(r-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
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
       mergesort(a,0,n);
       for(int i=0;i<n;i++){
           cout<<a[i]<<" ";
       }
       cout<<endl;
    }
   return 0;
}
